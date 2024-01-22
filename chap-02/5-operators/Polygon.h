#pragma once

#include <iostream>
#include <utility>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
private:
    std::vector<Vertex> _vertices;

public:
    void   add_vertex(int x, int y);
    Vertex operator[](int index);
};