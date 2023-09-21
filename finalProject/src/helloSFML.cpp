#include "circleTest.hpp"
#include "rectangleTest.hpp"
#include "triangleTest.hpp"

int main() {
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setFramerateLimit(100);
    
    //create all our circles in a vector
    circle c1, c2, c3, c4, c5;
    std::vector<circle> circles {c1, c2, c3, c4, c5};
    //create a triangle
    triangle t1;
    //create a rectangle and put it in a vector
    rectangle r1;
    std::vector<rectangle> rectangles;
    rectangles.push_back(r1);

    //seed the time so the circles spawn randomly
    srand(time(0));

    //set the initial postion of all 5 circles
    for (size_t i = 0; i < circles.size(); i++) {
        circles[i].setInitPos();
    }

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        //movement
        //create movement for the triangle
        t1.move(window);
        //create movement for the circles
        for (size_t i = 0; i < circles.size(); i++) {
            circles[i].moveCircle();
        }
        //creating movement for the rectangle (shoot)
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            //set the initial postion of the test rectangle using Vector2f and getPosition()
            sf::Vector2f t1Pos = t1.t_.getPosition();
            //set the rectangle position
            r1.r_.setPosition(t1Pos.x, t1Pos.y);
            //push this back again
            rectangles.push_back(r1);
        }
        for (size_t i = 0; i < rectangles.size(); i++) {
            //move the rectangle
            rectangles[i].moveRectangle();
        }
        
        // clear the window with black color
        window.clear(sf::Color::Black);
        
        //draw stuff
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
