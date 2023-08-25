//
//  main.cpp
//  FunctionPractice
//
//  Created by Andrew Delis on 8/25/23.
//

#include <iostream>
#include <cmath>
#include <ctime>

//Lab Functions
//Part 2
//(I did part one first but Part 2 appears first in my code)

//Part 2
//a)
//creating a function for hypotenuse problem we did in Part 1 a)
float getHypotenuse ( float firstSide, float secondSide){
    float hypotenuse = std::sqrt((firstSide * firstSide) + (secondSide * secondSide));
    return hypotenuse;
}

//Part 2
//b)
//creating a function for each the x velocity and y velocity calculations from Part1
double getXVelocity (double spd, double ang){
    double xVel = spd * std::cos(ang);
    return xVel;
}
double getYVelocity (double spd, double ang){
    double yVel = spd * std::cos(ang);
    return yVel;
}

//Part 2
//c)


int main(int argc, const char * argv[]) {
    
    //Lab Functions
    //Part 2
    //a)
    //defines the variables that we will need
    //and asks the user to enter the right-angle side lengths of a triangle
    float firstSide;
    float secondSide;
    float hypo;
    std::cout << "What are the right-angle side lengths of your triangle?\n";
    std::cout << "Please enter a right-angle side length?\n";
    std::cin >> firstSide;
    std::cout << "Please enter the other right-angle side length?\n";
    std::cin >> secondSide;
    //using the getHypotenuse function that we made
    hypo = getHypotenuse (firstSide, secondSide);
    //prints the length of the hypotenuse
    std::cout << "Hypotenuse: " << hypo << "\n";
    
    //Part 2
    //b)
    //Question: Why would it be difficult to turn the speed/velocity task above into a function?
    //Answer: It would be hard to make a single function for the velocity problem because
    //it outputs two answers. We can make two separate functions though.
    //
    //ask the user to input the speed they're going (a double)
    //and the angle they're going in (a double)
    double spd;
    double ang;
    std::cout << "What is your velocity?\n";
    std::cout << "Please enter the speed you are going:\n";
    std::cin >> spd;
    std::cout << "Please enter the angle of the direction you are going in (in radians):\n";
    std::cin >> ang;
    //calculates their x velocity (a double) and y velocity (a double) using the function
    double xVel;
    double yVel;
    xVel = getXVelocity(spd, ang);
    yVel = getYVelocity(spd, ang);
    //prints their x and y velocity
    std::cout << "X Velocity: " << xVel << "\n";
    std::cout << "Y Velocity: " << xVel << "\n";
    
    //Part 2
    //c)
    

    
    
    //Lab Functions
    //Part 1: Practice Calling Functions
    //a)
    //Defines the variables that we will need
    //and asks the user to enter the right-angle side lengths of a triangle
    float firstRightAngleSide;
    float secondRightAngleSide;
    float hypotenuse;
    std::cout << "What are the right-angle side lengths of your triangle?\n";
    std::cout << "Please enter a right-angle side length?\n";
    std::cin >> firstRightAngleSide;
    std::cout << "Please enter the other right-angle side length?\n";
    std::cin >> secondRightAngleSide;
    //calculates the hypotenuse using sqrt function and the pythagorean theorem
    hypotenuse = std::sqrt((firstRightAngleSide * firstRightAngleSide) + (secondRightAngleSide * secondRightAngleSide));
    //prints the length of the hypotenuse
    std::cout << "Hypotenuse: " << hypotenuse << "\n";
    
    //b)
    //ask the user to input the speed they're going (a double)
    //and the angle they're going in (a double)
    double speed;
    double angle;
    std::cout << "What is your velocity?\n";
    std::cout << "Please enter the speed you are going:\n";
    std::cin >> speed;
    std::cout << "Please enter the angle of the direction you are going in (in radians):\n";
    std::cin >> angle;
    //calculates their x velocity (a double) and y velocity (a double)
    double x;
    double y;
    x = speed * std::cos(angle);
    y = speed * std::sin(angle);
    //prints their x and y velocity
    std::cout << "X Velocity: " << x << "\n";
    std::cout << "Y Velocity: " << y << "\n";
    
    //c)
    //copy and pasted this from the link in the lab
    std::time_t result = std::time(nullptr);
       std::cout << std::asctime(std::localtime(&result))
                 << result << " seconds since the Epoch\n";
    //the functions worked as reported in cppreference.com
    //from what i can tell there are 3 functions being called in this bit of code
    //std::time, std::asctime, std::localtime
    return 0;
}

    




    
    
    
    
  
