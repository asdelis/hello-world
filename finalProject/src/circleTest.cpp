//
//  circleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#include "circleTest.hpp"


void circle() {
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
    window.setFramerateLimit(60);

    //creating a shape
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color(100, 250, 50));
    sf::Vector2f circlePosition (400, 50);
    shape.setPosition(circlePosition);

    //shape movment variables
    float xVelocity = 3;
    float yVelocity = 3;

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
        circlePosition.y += yVelocity;
        shape.setPosition(circlePosition);

        // clear the window with black color
        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }
}
