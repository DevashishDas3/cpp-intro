#pragma once
#include "Point.hpp"
#include <vector>

class Polygon {
    private:
        std::vector<Point> points;
        double p_perimeter = 0; //possible error
    public:
        Polygon(std::vector<Point> spoints);
        double area();
        double perimeter();
};