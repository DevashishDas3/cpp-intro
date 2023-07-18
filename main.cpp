#include <iostream>
#include <vector>
#include <array>
#include <math.h>



class Circle {
  public:
    double radius;

    Circle(double r){
      this->radius = r;
    }

    double area(){
      return (M_PI) * (pow(radius, 2));
    }
};

class Point {
  public:

    double x;
    double y;

    Point(double x_val, double y_val){
      this->x = x_val;
      this->y = y_val;
    }

    double distance_to_origin(){
      return sqrt(pow(x,2) + pow(y,2));
    }

    double distance_to_point(Point p){
      return sqrt(pow(p.x,2) + pow(p.y,2));
    }

    double distance_to_line(Line l){
      double A = (l.p1.y - l.p2.y);
      double B = (l.p1.x - l.p2.x);
      double C = (A)(l.p1.x) + (B)(l.p1.y)

      return (abs((A) * l.p1.x + (B) * l.p1.y + (C)))/sqrt(pow(A, 2) + pow(B, 2))
    }
}

class Line {
  public:
    Point p1,p2;

    double length(){
      return sqrt(pow((p1.x - p2.x),2) + pow((p1.x - p2.x),2)) 
    }
}

class Triangle {
  public:
    Point p1,p2,p3

    double area(){
      // use herons formula where a = sqrt(s(s-a)(s-b)(s-c)), where s = (a+b+c)/2
      double a = p1.distance_to_point(p2);
      double b = p2.distance_to_point(p3);
      double c = p3.distance_to_point(p1);

      double s = (a+b+c)/2;

      return sqrt(s*(s-a)*(s-b)*(s-c));
    }
}

class Polygon {
  public:
    std::vector<Point> points;
    double perimeter = 0;

    double area(){
      // Designated point of 


    }

    double perimeter(){
      for(int i = 1; i < size(points); i++){
        perimeter += sqrt(pow(points[i].x - points[i-1].x, 2) + pow(points[i].y - points[i-1].y, 2))
      }
    }
}

class AUV {
  public:
    std::string name;
    Point position;
    double depth;
    double heading;
    int speed[3];
    double angular_speed;

    void step(double dt){
      position.x += speed[0] * dt;
      position.y += speed[1] * dt;
    }

    void apply_acceleration(double a[3], double dt){
      for(int i = 0; i < 3; i++){
        speed[i] += (a[i]) * dt;
      }
    }

    void apply_angular_acceleration(double angular_acceleration){
      angular_speed += angular_acceleration * dt;
    }
}


int subtract(int x, int y){
  return x - y;
}

int multiply(int x, int y){
  return x * y;
}

int divide(int x , int y){
  if(y == 0){
    std::cerr << "Cannot divide by zero!" << std::endl;
  }
  return (x / y);
}

int main()
{
  std::cout << "Hello, world!" << std::endl;

  int x = 5;
  int y = 7;
  std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;

  std::cout << "Devashish Das: Classroom 115" << std::endl;

  int z = 3;
  std::cout << x+y+z << std::endl;

  int w = 7;
  std::cout << x+y+z+w << std::endl;

  int v = 5;
  std::cout << x+y+z+w+v << std::endl;

  std::cout << divide(2,0) << std::endl;

  //Circle instantiation

  Circle newcircle(4);
  std::cout << newcircle.area() << std::endl;


  return 0;
}