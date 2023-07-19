#include "Polygon.hpp"
#include "Triangle.hpp"
#include <cmath>
#include <vector>

Polygon::Polygon(std::vector<Point> spoints){
    this -> points = spoints;
}

double Polygon::area(){
    double p_area = 0;
      for(int i = 0; i < points.size() - 1; i++){
        Triangle sector(points[0], points[i], points[i+1]);
        p_area += sector.area();
      }
      return p_area;
}

double Polygon::perimeter(){
    for(int i = 1; i < points.size() - 1; i++){
        p_perimeter += sqrt(pow(points[i].x() - points[i-1].x(), 2) + pow(points[i].y() - points[i-1].y(), 2));
    }
    return p_perimeter;
}