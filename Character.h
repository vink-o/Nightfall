#ifndef CHARACTER_H
#define CHARACTER_H

#include<string>
#include<vector>

enum Role {Warrior, Healer, Miner, Hunter, Builder, Lumberjack};

class Character
{
    protected:
        double damage;
        double HP;
        std::string role;
        double population;
        int x,y;
        char symbol;
    public:
        void Set(double damage,double HP,std::string role, double population);
        int GetX(){return x;}
        int GetY(){return y;}

        void Set(double d, double hp, int StartX, int StartY)
        {
            damage=d;
            HP=hp;
            x=StartX;
            y=StartY;
        }
        
};

class LUMBERJACK : public Character
{
    public:
        LUMBERJACK(int StartX, int StartY)
        {
            this->HP=100;
            this->damage=15;
            this->role="Lumberjack";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'L';
        }
};

class WARRIOR : public Character
{
    public:
        WARRIOR(int StartX, int StartY)
        {
            this->HP=150;
            this->damage=20;
            this->role="Warrior";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'W';
        }
};

class HEALER : public Character
{
    public:
        HEALER(int StartX, int StartY)
        {
            this->HP=70;
            this->damage=5;
            this->role="Healer";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'H';
        }
};

class MINER : public Character
{
    public:
    MINER(int StartX, int StartY)
        {
            this->HP=120;
            this->damage=10;
            this->role="Miner";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'M';
        }
};

class HUNTER : public Character
{
    public:
        HUNTER(int StartX, int StartY)
        {
            this->HP=100;
            this->damage=12;
            this->role="Hunter";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'h';
        }
};

class BUILDER : public Character
{
    public:
        BUILDER(int StartX, int StartY)
        {
            this->HP=90;
            this->damage=7;
            this->role="Builder";
            this -> x = StartX;
            this -> y = StartY;
            this -> symbol = 'B';
        }
};

#endif