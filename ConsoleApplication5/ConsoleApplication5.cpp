#include <conio.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "QuadraticEquations.h"

void askKoefficients(double*, double*, double*);
void showRoots(QuadraticEquations);

int main()
{
    double a, b, c;
    askKoefficients(&a, &b, &c);

    QuadraticEquations equation(a, b, c);

    if (!equation.solve())
        cout << "No real roots." << endl;
    else
        showRoots(equation);

    _getch();
    return 0;
}

void askKoefficients(double* a, double* b, double* c)
{
    cout << "Enter A, B, C: ";
    cin >> *a >> *b >> *c;
}

void showRoots(QuadraticEquations equation)
{
    double x1 = equation.getX1(),
        x2 = equation.getX2();

    if (x1 != x2)
        cout << "x = " << x1 << " or x = " << x2 << ".";
    else
        cout << "x = " << x1 << ".";
}
