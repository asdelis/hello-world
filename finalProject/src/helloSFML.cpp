//#include "circleTest.hpp"
//#include "rectangleTest.hpp"
//#include "triangleTest.hpp"
#include "collisions.hpp"

int main() {
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setFramerateLimit(100);
    
    //seed the time so the circles spawn randomly
    srand(time(0));
    
    //SHAPES
    //create all our circles in a vector
    circle c1, c2, c3, c4, c5, c6, c7, c8, c9;
    std::vector<circle> circles {c1, c2, c3, c4, c5, c7, c8, c9};
    //create a triangle
    triangle t1;
    //create a rectangle and put it in a vector
    rectangle r1;
    std::vector<rectangle> rectangles;
    rectangles.push_back(r1);

    //set the initial postion of all 5 circles
    for (size_t i = 0; i < circles.size(); i++) {
        circles[i].setInitPos();
    }
    
    //PROGRAM LOOP
    // run the program as long as the window is open
    while (window.isOpen())
    {
        //check all the window's events that
        //were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            //"close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        //MOVEMENT
        //create movement for the triangle
        t1.move(window);
        
        //create movement for the circles
        for (size_t i = 0; i < circles.size(); i++) {
            bool isHit;
            circles[i].moveCircle();
            collisions(circles[i], t1);
        }
        //set the position for the rectangle and update it in the vector
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            //getPosition() for the triangle
            sf::Vector2f t1Pos = t1.t_.getPosition();
            //set the rectangle position
            r1.r_.setPosition(t1Pos.x, t1Pos.y);
            //push this back again
            rectangles.push_back(r1);
        }
        //move the rectangles
        for (size_t i = 0; i < rectangles.size(); i++) {
            rectangles[i].moveRectangle();
        }
        
        
        // clear the window with black color
        window.clear(sf::Color::Black);
        
        //DRAW
        //draw the triangle
        window.draw(t1.t_);
        //draw the circles
        for (size_t i = 0; i < circles.size(); i++) {
            window.draw(circles[i].c_);
        }
        //draw the rectangles
        for (int i = 0; i < rectangles.size(); i++){
            window.draw(rectangles[i].r_);
        }
        
        //display the window
        window.display();
    }
    return 0;
}
