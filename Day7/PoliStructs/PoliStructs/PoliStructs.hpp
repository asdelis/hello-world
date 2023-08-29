//
//  PoliStructs.hpp
//  PoliStructs
//
//  Created by Andrew Delis on 8/29/23.
//

#ifndef PoliStructs_hpp
#define PoliStructs_hpp

#include <stdio.h>
#include <iostream>
#include <string>

#endif /* PoliStructs_hpp */

struct politician {
    std::string name;
    std::string party;
    std::string govtLevel;
};

//Javacans signature
std::vector<politician> Javacans(std::vector<politician> politicianList);

//FederalCpluser signature
std::vector<politician> FederalCplusers(std::vector<politician> politicianList);





