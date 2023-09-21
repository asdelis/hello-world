//
//  circleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#include "circleTest.hpp"

//circle constructor
circle::circle(){
    c_.setRadius(15);
    c_.setFillColor(sf::Color(0, 0, 0));
    c_.setOutlineThickness(1.f);
    c_.setOutlineColor(sf::Color(0, 100, 200));
    x_ = 0;
    y_ = 0;
}

//sets the initial position randomly on the x axis
//set the circle close to the top of the y axis
void circle::setInitPos(){
    x_ = rand() % 800;
    y_ = 50;
    c_.setPosition(x_, y_);
}

void circle::moveCircle(){
    c_.move(0, 2);
    sf::Vector2f c_Pos = c_.getPosition();
    if (c_Pos.y > 600) {
        c_.setPosition(c_Pos.x, 0);
    }
    c_.move(0, 2);
}



