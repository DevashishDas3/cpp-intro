#include "Triangle.hpp"
#include <cmath>

Triangle::Triangle(Point sp1, Point sp2, Point sp3){
    this -> p1 = sp1;
    this -> p2 = sp2;
    this -> p3 = sp3;
}

double Triangle::area(){
    double a = p1.distance_to_point(p2);
    double b = p2.distance_to_point(p3);
    double c = p3.distance_to_point(p1);

    double s = (a+b+c)/2;

    return sqrt(s*((s-a)*(s-b)*(s-c)));
}