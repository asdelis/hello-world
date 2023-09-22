//
//  collisions.cpp
//  testSFML
//
//  Created by Josh Barton on 9/20/23.
//

#include "collisions.hpp"

void collisions(circle& c, rectangle& r) {
    //collision detection between circle and rectangle
    if (r.r_.getGlobalBounds().intersects(c.c_.getGlobalBounds())) {
        c.c_.setPosition(-1000, -1000);
        c.shouldRenderCircle = false;
    }
}

void triangleCollision(circle& c, std::vector<circle> circles, triangle& t) {
    //collision detection between triangle and circle
    if (t.t_.getGlobalBounds().intersects(c.c_.getGlobalBounds())) {
        //reset triangle position after hit
        t.resetPosition();
        resetAllCircles(circles);
    }
}

//resets all the circles
void resetAllCircles(std::vector<circle> circles){
    for (size_t i = 0; i < circles.size(); i++) {
        circles[i].setInitPos();
    }
}
