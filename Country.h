//
// Created by Anastazja on 17.01.2023.
//

#ifndef LAB10_COUNTRY_H
#define LAB10_COUNTRY_H
#include <iostream>
#include "City.h"

class Country {
public:
    std::string name;
    City capital;
    City cities[100];
    Country(const std::string &name);

};


#endif //LAB10_COUNTRY_H
