#include "circleTest.hpp"
#include "rectangleTest.hpp"
#include "triangleTest.hpp"

int main() {
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setFramerateLimit(100);
    
    //create all our circles
    circle c1, c2, c3, c4, c5;
    //create triangle class
    triangle t1;

    //seed the time so the circles spawn randomly
    srand(time(0));

    //set the initial postion of all 5 circles
    c1.setInitPos();
    c2.setInitPos();
    c3.setInitPos();
    c4.setInitPos();
    c5.setInitPos();
    //set the initial postion of the test rectangle using Vector2f and getPosition()
    sf::Vector2f circlePos = c1.c_.getPosition();
    

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
        
        //create movement for the circles
        c1.moveCircle();
        c2.moveCircle();
        c3.moveCircle();
        c4.moveCircle();
        c5.moveCircle();
        //create movement for the rectangle
        rectangle r1(circlePos);
        r1.moveRectangle();
        //call the move function
        t1.move(window);
        
        // clear the window with black color
        window.clear(sf::Color::Black);
        
        //draw the shape in the window
        window.draw(t1.t_);
        //draw the circles
        window.draw(c1.c_);
        window.draw(c2.c_);
        window.draw(c3.c_);
        window.draw(c4.c_);
        window.draw(c5.c_);
        //draw the circles
        window.draw(r1.r_);
    
        //display the window
        window.display();
    }

    return 0;
}
