#include "Poly.h"

double& Poly::operator[](int index)
{
    return terms[index];
}