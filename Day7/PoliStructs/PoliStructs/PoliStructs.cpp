//
//  PoliStructs.cpp
//  PoliStructs
//
//  Created by Andrew Delis on 8/29/23.
//

#include "PoliStructs.hpp"

//Javacans implementation
//takes a vector of policitians and returns a new vector of politicians that are
//affiliated with the Javacans by using a for loop and the .pushback function
std::vector<politician> Javacans(std::vector<politician> politicianList){
    std::vector<politician> javacansList;
    for (int i = 0; i < politicianList.size(); i++){
        if (politicianList[i].party == "javacan") {
            javacansList.push_back(politicianList[i]);
        }
    }
    return javacansList;
}

//FederalCpluser implementation
//same as above except that I added an && to the boolean in the if
std::vector<politician> FederalCplusers(std::vector<politician> politicianList){
    std::vector<politician> federalCpluserList;
    for (int i = 0; i < politicianList.size(); i++){
        if (politicianList[i].party == "cpluser" && politicianList[i].govtLevel == "federal") {
            federalCpluserList.push_back(politicianList[i]);
        }
    }
    return federalCpluserList;
}






