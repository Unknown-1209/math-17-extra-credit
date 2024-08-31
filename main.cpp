#include <iostream>
#include "approximation.h"

using namespace std;

// Example function to approximate (dy/dx = x + y)
double Function(double x, double y) {
    return (x * x) + (y * y);
}


int main() {
    Approximation approx;

    double x0 = 0.0;  // Initial value of x
    double y0 = 0.0;  // Initial value of y 
    double deltaX = 0.01;
    int steps = 100;   // Number of steps to approximate

    double result = approx.eulerMethod(Function, x0, y0, deltaX, steps);
    
    cout << "Using Euler's method to approximate the solution to dy/dx = x^2 + y^2\n";

    cout << "Approximate value of y at x = " << approx.computeFinalX(x0, deltaX, steps) << " is " << result << endl;

    return 0;
}
