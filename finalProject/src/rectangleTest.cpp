//
//  rectangleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#include "rectangleTest.hpp"

//Constructor
rectangle::rectangle(){
    r_.setSize(sf::Vector2f(2, 12));
    r_.setOutlineColor(sf::Color::Transparent);
    r_.setOutlineThickness(1);
    r_.setOutlineColor(sf::Color::White);
    x_ = 0;
    y_ = 0;
}

//uses the already existing move function
void rectangle::moveRectangle(){
    r_.move(0, -0.5);
}
