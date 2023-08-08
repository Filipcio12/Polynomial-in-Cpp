#include "Poly.h"
#include <cmath>

double& Poly::operator[](unsigned int index)
{
    return terms[index];
}

std::ostream& operator<<(std::ostream& os, const Poly& p)
{
    bool isFirst = true;
    for (auto term = p.terms.rbegin(); term != p.terms.rend(); term++) {
        int order = term->first;
        double coefficient = term->second;
        char sign = 43 + 2*(coefficient < 0);
        (isFirst && coefficient < 0) ? os << sign : os << "";
        (!isFirst) ? os << " " << sign << " " : os << "";
        (fabs(coefficient) != 1 || order == 0) ? os << fabs(coefficient) : os << "";
        (order > 0) ? os << "x" : os << "";
        (order > 1) ? os << "^" << order : os << "";
        isFirst = false;
    }
    return os;
}