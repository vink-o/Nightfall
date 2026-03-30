#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>

class Character
{
    private:
        double damage;
        double HP;
        std::string position;
        double population;
        double energy;
    public:
        void Set(double damage,double HP,std::string position, double population,double energy);
};

#endif