#include "Polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}

Vertex Polygon::operator[](int index)
{
    return _vertices[index];
}

std::ostream& operator<<(std::ostream& stream, Polygon polygon) 
{
    for (auto vertex: polygon._vertices)
    {
        stream << "(" << vertex.first << "," << vertex.second << ") ";
    }
     
    return stream;
}