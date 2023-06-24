#pragma once
#include "Shape.h"
#include <iostream>

class Circle :
    public Shape
{
    double Radius;
    double pi = 3.14;
    void getArea() {
        std::cout << "The area of your circle is: " << pow(Radius, pi);
    }
};