//
//  rectangleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#include "rectangleTest.hpp"

rectangle::rectangle(sf::Vector2f pos){
    r_.setSize(sf::Vector2f(2, 12));
    r_.setOutlineColor(sf::Color::Transparent);
    r_.setOutlineThickness(1);
    r_.setOutlineColor(sf::Color::White);
    x_ = pos.x;
    y_ = pos.y;
    r_.setPosition(x_, y_);
    
}

void rectangle::moveRectangle(){
    r_.move(0, -0.03);
}
