#pragma once 

class Triangle
{
    private:
        Point p1, p2, p3;
    public:
        Triangle(Point, Point, Point);
        double area();
}