#include <cmath>
#include "QuadraticEquations.h"

#define SUCCESS 1
#define FAIL    0

QuadraticEquations::QuadraticEquations(double aa, double bb, double cc,
    double xx1, double xx2)
    : a(aa), b(bb), c(cc), x1(xx1), x2(xx2)
{

}

void QuadraticEquations::setValues(double aa, double bb, double cc)
{
    a = aa;
    b = bb;
    c = cc;
}

bool QuadraticEquations::solve()
{
    double d = findDiscrim();

    if (a != 0 && d >= 0) {
        x1 = (-b + (sqrt(d))) / (2 * a);
        x2 = (-b - (sqrt(d))) / (2 * a);

        return SUCCESS;
    }
    else if (a == 0 || d < 0)
        return FAIL;
}

double QuadraticEquations::getX1() const
{
    return x1;
}

double QuadraticEquations::getX2() const
{
    return x2;
}

double QuadraticEquations::findDiscrim()
{
    return (b * b) - (4 * a * c);
}

