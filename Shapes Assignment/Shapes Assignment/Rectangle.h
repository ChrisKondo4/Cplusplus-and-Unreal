#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle :
    public Shape
{
    int Height;
    int Width;
    void getArea() {
        std::cout << "The area of your rectangle is: " + (Height * Width);
    }
};

