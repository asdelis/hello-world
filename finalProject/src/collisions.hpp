//
//  circleTest.cpp
//  testSFML
//
//  Created by Andrew Delis on 9/20/23.
//

#ifndef collisions_hpp
#define collisions_hpp

#include <stdio.h>
#include "circleTest.hpp"
#include "rectangleTest.hpp"
#include "triangleTest.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

#endif /* collisions_hpp */

//what happens when a rectangle and a circle collide
void rectangleCollision(circle& c, rectangle& r);

//what happens when a triangle and a circle collide
void triangleCollision(circle& c, std::vector<circle>& circles, triangle& t);

//resets all the circle positions
void resetAllCircles(std::vector<circle>& circles);

//returns whether a vector is entirely false
bool vectorRenderStatus(std::vector<circle> circles);

//resets the game
void resetGame(std::vector<circle>& circles);
