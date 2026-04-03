#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<vector>

enum Role {Warrior, Healer, Miner, Hunter, Builder, Lumbejack};

class Character
{
    protected:
        double damage;
        double HP;
        std::string position;
        double population;
    public:
        void Set(double damage,double HP,std::string position, double population);
        
};

class LUMBERJACK : public Character
{
    LUMBERJACK()
    {
        this->HP=100;
        this->damage=15;
        this->position="Lumberjack";
    }
};

class WARRIOR : public Character
{
    WARRIOR()
    {
        this->HP=150;
        this->damage=20;
        this->position="Warrior";
    }
};

class HEALER : public Character
{
    HEALER()
    {
        this->HP=70;
        this->damage=5;
        this->position="Healer";
    }
};

class MINER : public Character
{
    MINER()
    {
        this->HP=120;
        this->damage=10;
        this->position="Miner";
    }
};

class HUNTER : public Character
{
    HUNTER()
    {
        this->HP=100;
        this->damage=12;
        this->position="Hunter";
    }
};

class BUILDER : public Character
{
    BUILDER()
    {
        this->HP=90;
        this->damage=7;
        this->position="Builder";
    }
};

#endif