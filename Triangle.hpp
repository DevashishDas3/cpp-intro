#pragma once 

class Triangle
{
    private:
        Point p1, p2, p3;
    public:
        Triangle(Point p1, Point p2, Point p3);
        double area();
}