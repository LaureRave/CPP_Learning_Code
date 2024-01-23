#pragma once

#include <iostream>
#include <utility>
#include <vector>
#include <ostream>

using Vertex = std::pair<int, int>;


class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, Polygon polygon);
private:
    std::vector<Vertex> _vertices;

public:
    void   add_vertex(int x, int y);
    Vertex operator[](int index);
};


