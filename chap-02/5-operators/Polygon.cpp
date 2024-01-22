#include "Polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}

Vertex Polygon::operator[](int index)
{
    return _vertices[index];
}