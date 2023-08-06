#pragma once
#include <map>

class Poly {
    std::map <int, double> terms;

    public:
        double& operator[](int index);
};