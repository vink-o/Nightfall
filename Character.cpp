#include "Character.h"
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void Character :: Set(double damage,double HP,std::string position,double population)
{
    this -> damage=0;
    this -> HP=0;
    this -> position=" ";
    this -> population=0;
}

