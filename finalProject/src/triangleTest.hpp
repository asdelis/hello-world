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
    

//    //need a draw method
//    void draw(const sf::RenderWindow& window);
    
//    //reset position if hit
//    void resetPosition(const sf::RenderWindow& window);
    
    //fire a rectangle from the front of the ship
    //Rectangle makeRectangle() const;
    //create a friend variable that will help with collisions
    //friend bool collides(const Triangle& triangle, const Circle& circle);
    
private:
};
