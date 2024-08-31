#ifndef APPROXIMATION_H
#define APPROXIMATION_H
#include<iostream>
#include<iomanip>

class Approximation {
public:
    // Constructor
    Approximation();

    // Euler's method to approximate the solution of a differential equation
    double eulerMethod(double (*f)(double, double), double x0, double y0, double stepSize, int steps);
    double computeFinalX(double x0, double stepSize, int steps);
    void MATH17();
    
    private:
        double y, x, deltaX;
};

#endif // APPROXIMATION_H
