// Implement Rectangle functions here.
#include "Rectangle.h"

#include <iostream>

float Rectangle::_default_size = 0.0f;

Rectangle::Rectangle()
    : Rectangle { _default_size }
{}

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

Rectangle::Rectangle(float size)
    : Rectangle(size, size)
{}

void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}

void Rectangle::set_default_size(float size)
{
    _default_size = size;
}