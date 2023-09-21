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

//create class called triangle that will act as our player
class triangle{
public:
    //create a triangle shape
    sf::CircleShape t_;

    //constructor
    triangle();

    //need a move method
    void move(sf::RenderWindow& window);

    //need a draw method
    void draw(const sf::RenderWindow& window);

    //reset position if hit
    void resetPosition(const sf::RenderWindow& window);

    //fire a rectangle from the front of the ship
    //Rectangle makeRectangle() const;
    //create a friend variable that will help with collisions
    //friend bool collides(const Triangle& triangle, const Circle& circle);
    
private:
};
