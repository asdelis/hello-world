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
    t_.setFillColor(sf::Color(100, 250, 50)); //first number was 100
}

//move method for triangle class
void triangle::move(sf::RenderWindow& window){
    //most left position
    sf::Vector2f mostLeftPosition = sf::Vector2f(0.f, 550.f);
    
    //check if left key is pressed, if so, move the triangle
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
    //left key is pressed: move our character
        t_.move(-1.f, 0.f);
        
        //get triangle position
        sf::Vector2f trianglePosition = t_.getPosition();
        
        //stop the triangle from moving more left if it hits x = 0
            if (trianglePosition == mostLeftPosition){
              t_.move(-1.f, 0.f);
            }
    }
    
    //check if right key is pressed, if so, move the triangle
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        //right key is pressed: move our character
        t_.move(1.f, 0.f);
    //stop the triangle from moving more right if it hits x = 800
    }
}

//reset position method if hit
void triangle::resetPosition(const sf::RenderWindow& window){
    //get the window size and store in variable windowSize
    auto windowSize = window.getSize();
    
    //set the position of the triangle
    t_.setPosition(380.f, 550.f);
}
