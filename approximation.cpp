#include "approximation.h"

// Constructor
Approximation::Approximation() {}

// Euler's method to approximate the solution of a differential equation
double Approximation::eulerMethod(double (*f)(double, double), double x0, double y0, double deltaX, int steps) {
    x = x0;
    y = y0;
    std::setprecision(4); // truncating doubles at the ten thousandths place

    for (int i = 0; i < steps; i++) {
        std::cout << "f(" << x + deltaX << "," << y << "): " << (f(x, y) * deltaX) + y << std::endl;
        y =  (f(x, y) * deltaX) + y; // y(n+1) =  + f(x(n), y(n)) * deltaX + y(n)
        x = x + deltaX; // Increment x by step size
    }

    return y;
} 
double Approximation::computeFinalX(double x0, double stepSize, int steps) {
    x = x0; deltaX = stepSize;
    return x0 +steps * deltaX;
}



void Approximation::MATH17() {
    std::cout << "Gardner is an awesome calc teacher!\n";
}
