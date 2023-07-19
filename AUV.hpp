#pragma once

#include <string>

class AUV {
    private:
        std::string name;
        Point position;
        double depth;
        double heading;
        double speed[3];
        double angular_speed;
    public:
        AUV(std::string sname, Point sposition, double sdepth, double sheading, double sspeed[3], double sangular_speed);
        void step(const doubl &dt);
        void apply_acceleration(double a[3], const double &dt);
        void apply_angular_acceleration(double angular_acceleration, const double &dt);

}