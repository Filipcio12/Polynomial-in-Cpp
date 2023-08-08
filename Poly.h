#pragma once
#include <map>
#include <iostream>

class Poly {
    std::map <unsigned int, double> terms;

    public:
        double& operator[](unsigned int index);
        friend std::ostream& operator<<(std::ostream& os, const Poly& p);
        Poly& operator=(const Poly& p);
        Poly& operator=(double p);
};