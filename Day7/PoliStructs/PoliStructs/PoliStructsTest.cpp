//
//  PoliStructsTest.cpp
//  PoliStructsTest
//
//  Created by Andrew Delis on 8/29/23.
//

#include "PoliStructs.hpp"
#include <iostream>

int main (){
    
    //initializing a bunch of politicians
    //some quick checks
    politician doof{"andrew delis", "cpluser", "state"};
    politician bench{"benjamin delis", "javacan", "federal"};
    politician torNato{"nathan delis", "cpluser", "federal"};
    politician discoDan{"daniel delis", "javacan", "state"};
    assert(doof.name == "andrew delis");
    assert(bench.party == "javacan");
    assert(torNato.govtLevel == "federal");
    
    //making a vector of the politicians
    //quick check
    std::vector<politician> politicianList = {doof, bench, torNato, discoDan};
    assert(politicianList.size() == 4);
    
    //testing the functions by saving them in new vectors and printing the results
    std::vector<politician> javacansList = Javacans(politicianList);
    std::vector<politician> federalCpluser = FederalCplusers(politicianList);
    assert(javacansList.size() == 2);
    assert(federalCpluser.size() == 1);
    //loop to look at the results of the Javacans list
    for (int i = 0; i < javacansList.size(); i++) {
        std::cout << javacansList[i].name << ", " << javacansList[i].party << ", " << javacansList[i].govtLevel << "\n";
    }
    //loop to look at the results of the FederalCplusers list
    for (int i = 0; i < federalCpluser.size(); i++) {
        std::cout << federalCpluser[i].name << ", " << federalCpluser[i].party << ", " << federalCpluser[i].govtLevel << "\n";
    }
    
    //looks like it worked
    
    return 0;
}



