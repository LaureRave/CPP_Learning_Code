#pragma once

class Rectangle
{
public:
    Rectangle();
    Rectangle(float length, float width);
    Rectangle(float size);

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    void scale(float ratio);
    static void set_default_size(float size);

private:
    static float _default_size;
    float _length;
    float _width;
};
