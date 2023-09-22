//
//  triangleTest.hpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#ifndef triangleTest_hpp
#define triangleTest_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

#endif /* triangleTest_hpp */


class triangle{
public:
    //this triangle class uses the already existing rectangle class
    sf::CircleShape t_;

    //triangle constructor that details radius, color, and outline
    triangle();

    //create movement
    void move(sf::RenderWindow& window);
    
    //get position of the triangle
    sf::Vector2f getPosition();
    
    //resets the position of the triangle after hit
    void resetPosition();
    
private:
};
