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

void circle::setInitPos(){
    x_ = rand() % 800;
    y_ = 50;
    c_.setPosition(x_, y_);
}

void circle::moveCircle(){
    c_.move(0, 0.03);
}


//sf::CircleShape circle::makeCircle(){
//    //make the shape with the correct size
//    sf::CircleShape shape(10.f);
//
//    //set random position
//    shape.setPosition(x_, y_);
//    return shape;
//
//    //edit the color and outline
//    shape.setFillColor(sf::Color(0, 0, 0));
//    shape.setOutlineThickness(1.f);
//    shape.setOutlineColor(sf::Color(0, 100, 200));
//
//    //random x position
//    x_ = rand() % 800;
//    //always want the height to be the same at around 50
//    y_ = 50;
//
//    //set random position
//    shape.setPosition(x_, y_);
//    return shape;
//};

//void setCircle(circle c){
//    //random x position
//    x_ = rand() % 800;
//    //always want the height to be the same at around 50
//    y_ = 50;
//
//    //set random position
//    shape.setPosition(x_, y_);
//    return shape;
//}



