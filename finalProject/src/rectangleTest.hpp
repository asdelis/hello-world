//
//  rectangleTest.hpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#ifndef rectangleTest_hpp
#define rectangleTest_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#endif /* rectangleTest_hpp */

class rectangle {
public:
    //this rectangle class uses the already existing rectangle class
    sf::RectangleShape r_;
    
    //rectangle constructor that details height/width, color, and outline
    rectangle();
    
    //create movement
    void moveRectangle();
    
private:
    //saves the position of the rectangle
    float x_;
    float y_;
    
};
