#include <iostream>

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

  return 0;
}