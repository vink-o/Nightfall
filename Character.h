#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<vector>

enum Role {Warrior, Healer, Miner, Hunter, Builder};

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