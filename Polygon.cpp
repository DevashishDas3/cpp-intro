#include "Polygon.hpp"
#include "Polygon.hpp"
#include "Point.hpp"
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
        p_perimeter += (points[i].distance_to_point(points[i+1]));
    }
    p_perimeter += (points[points.size() - 1].distance_to_point(points[0]));
    return p_perimeter;
}