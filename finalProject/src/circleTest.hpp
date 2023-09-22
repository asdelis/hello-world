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
    
    //whether this has been hit or not
    bool shouldRenderCircle;
    
    //set initial position
    void setInitPos();
    
    //create movement
    void moveCircle();
    
    
    
private:
    //saves the position of the circle
    float x_;
    float y_;
    
};


