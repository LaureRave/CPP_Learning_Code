#pragma once

class Rectangle
{
public:
    static inline float Rectangle::_default_size = 0.f;
    
    Rectangle();
    Rectangle(float length, float width);
    Rectangle(float size);

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);

private:
    float _length;
    float _width;
};
