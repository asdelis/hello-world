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
    
    //circle constructor that details radius, color, and outline
    circle();
    
    //set initial position
    void setInitPos();
    
    //create movement
    void moveCircle();
    
    //get the position of the circle so we can use SFML get position
    
    
private:
    //saves the position of the circle
    float x_;
    float y_;
    
};


