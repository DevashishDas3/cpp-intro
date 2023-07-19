#include "AUV.hpp"
#include <cmath>
#include <string>
#include <vector>

AUV::AUV(std::string sname, Point sposition, double sdepth, double sheading, double sspeed[3], double sangular_speed){
    this -> name = sname;
    this -> position = sposition;
    this -> depth = sdepth;
    this -> heading = sheading;
    this -> speed = sspeed;
    this -> angular_speed = sangular_speed;
}

void AUV::step(const doubl &dt){
    position.setX(position.x() + speed[0] * dt);
    position.setY(position.y() + speed[1] * dt);
}

void AUV::apply_acceleration(double a[3], const double &dt){
    for(int i = 0; i < 3; i++){
        speed[i] += (a[i]) * dt;
    }
}

void AUV::apply_angular_acceleration(double angular_acceleration, const double &dt){
    angular_speed += angular_acceleration * dt;
}