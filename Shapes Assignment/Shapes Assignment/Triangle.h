#pragma once
#include "Shape.h"
#include <iostream>

class Triangle :
    public Shape
{
    int Base;
    int Height;
    void getArea() {
        std::cout << "The area of your triangle is: " + (Height * Base / 2);
    }
};

