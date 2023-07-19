#pragma once

class Line
{
    private:
        Point p1, p2;
    public:
        Line(Point, Point);
        double length();
}