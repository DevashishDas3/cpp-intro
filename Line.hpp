#pragma once
#include "Point.hpp"

class Line
{
    private:
        Point p1, p2;
    public:
        double distance_to_point(Point p);
        Line(Point p1, Point p2);
        double length();
};