#include "circleTest.hpp"

int main() {
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    
    
    //create all our circles
    circle c1, c2, c3, c4, c5;

    //seed the time so the circles spawn randomly
    srand(time(0));

    //set the initial postion of all 5 circles
    c1.setInitPos();
    c2.setInitPos();
    c3.setInitPos();
    c4.setInitPos();
    c5.setInitPos();
    
//    //creating a shape
//    sf::CircleShape shape(10.f);
//    shape.setFillColor(sf::Color(0, 0, 0));
//    shape.setOutlineThickness(1.f);
//    shape.setOutlineColor(sf::Color(0, 100, 200));
//    sf::Vector2f circlePosition (400, 50);
//    shape.setPosition(circlePosition);

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
        
        // clear the window with black color
        window.clear(sf::Color::Black);
        
        //draw the circles
        window.draw(c1.c_);
        window.draw(c2.c_);
        window.draw(c3.c_);
        window.draw(c4.c_);
        window.draw(c5.c_);
        
        //display the window
        window.display();
    }

    return 0;
}
