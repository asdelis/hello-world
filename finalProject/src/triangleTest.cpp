//
//  triangleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#include "triangleTest.hpp"

//constructor
triangle::triangle(){
    t_.setRadius(25.f);
    t_.setPointCount(3);
    t_.setPosition(380.f, 550.f);
    t_.setFillColor(sf::Color(100, 100, 100));
    sf::FloatRect boundingBox = t_.getGlobalBounds();
}

//move method for triangle class
void triangle::move(sf::RenderWindow& window){
    //right and left most position
    sf::Vector2f mostLeftPosition = sf::Vector2f(0.f, 550.f);
    sf::Vector2f mostRightPosition = sf::Vector2f(750.f, 550.f);
    sf::Vector2f t_Pos = t_.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        //stop the triangle from moving more left if it hits x = 0
        if (t_Pos.x > mostLeftPosition.x){
            t_.move(-3.0f, 0.f);
        }
    }

    //check if right key is pressed, if so, move the triangle
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        //stop the triangle from moving more right if it hits x = 800
        if (t_Pos.x < mostRightPosition.x){
        //right key is pressed: move our character
        t_.move(3.0f, 0.f);
        }
    }
}

//reset position method if hit
  void triangle::resetPosition() {
    //set the position of the triangle
    t_.setPosition(380.f, 550.f);
  }


