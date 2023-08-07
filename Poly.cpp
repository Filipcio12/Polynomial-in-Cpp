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
        if (isFirst) {
            os << coefficient << "x^" << order;
            isFirst = false;
        }
        else {
            char sign = 43 + 2*(coefficient < 0);
            if (order > 1) {
                os << " " << sign << " " << fabs(coefficient) << "x^" << order;
            }
            else if (order == 1) {
                os << " " << sign << " " << fabs(coefficient) << "x";
            }
            else {
                os << " " << sign << " " << fabs(coefficient);
            }
        }
    }
    if (isFirst) {
        os << 0;
    }
    return os;
}