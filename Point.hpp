#pragma once

class Point
{
private:
  double m_d_x;
  double m_d_y;

public:
  Point(double x, double y);

  double x(){ return m_d_x; }
  double y(){ return m_d_y; }

  void setX(double x_val){m_d_x = x_val;}
  void setY(double y_val){m_d_y = y_val;}
  
  double distance_to_origin();
  double distance_to_point(Point p);
};