//
//  circleTest.hpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#ifndef circleTest_hpp
#define circleTest_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#endif /* circleTest_hpp */

class circle {
public:
    //this circle class uses the already existing circle class
    sf::CircleShape c_;
    //and saves the position
    float x_;
    float y_;
    
    //circle constructor that details radius, color, and outline
    circle();
    
    //set initial position
    void setInitPos();
    
    //create movement
    void moveCircle();
    
    //functions for main (makes 5 circles, initializes their position and moves them
    void spawnCircles();
    
private:
    
};


