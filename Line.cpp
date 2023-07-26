#include "Line.hpp"
#include "Point.hpp"
#include <cmath>

Line::Line(Point sp1, Point sp2){
    this -> p1 = sp1;
    this -> p2 = sp2;
}
    double Line::length(){
        return p1.distance_to_point(p2);
    }
    double Line::distance_to_point(Point p){
        double slope = (p2.y() - p1.y()) / (p2.x() - p1.x());
        double a = (-1) * slope;

        double y_int = p2.x() - (p2.x() * slope)
        double c = (-1) * y_int;

        return abs((a * p.x() + p.x() + c)/(sqrt(pow(a,2) + 1)));
    }
