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

void collisions(circle& c, rectangle& r);
void triangleCollision(circle& c, std::vector<circle> circles, triangle& t);

void resetAllCircles(std::vector<circle> circles);
void shoot(triangle t, std::vector<rectangle> rectangles, rectangle r);

