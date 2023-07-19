#pragma once

class Polygon {
    private:
        std::vector<Point> points;
        double p_perimeter = 0; //possible error
    public:
        Polygon();
        double area();
        double perimeter();
}