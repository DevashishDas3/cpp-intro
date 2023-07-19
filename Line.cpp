#include "Line.hpp"
#include "Point.hpp"
#include <cmath>

Line::Line(Point sp1, Point sp2){
    this -> p1 = sp1;
    this -> p2 = sp2;
}

Line::length(){
    return sqrt(pow(p1.x() - p2.x(), 2) + pow(p1.y() - p2.y(), 2));
}