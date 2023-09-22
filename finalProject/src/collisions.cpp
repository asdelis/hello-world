//
//  collisions.cpp
//  testSFML
//
//  Created by Josh Barton on 9/20/23.
//

#include "collisions.hpp"

bool collisions(circle& c, rectangle& r) {
    //collision detection between circle and rectangle
    if (r.r_.getGlobalBounds().intersects(c.c_.getGlobalBounds()))
    {
        std::cout<< "Collision!" << std::endl;
        return true;
    }
    return false;
}

bool collisions(circle& c, triangle& t) {
    //collision detection between triangle and circle
    if (t.t_.getGlobalBounds().intersects(c.c_.getGlobalBounds())) {
        //std::cout<< "Collision!" << std::endl;
        //reset triangle position after hit
        //t.resetPosition();
        return true;
    }
    return false;
}
