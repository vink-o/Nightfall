#include "Base.h"

#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void Base :: SetStart()
{
    this -> Energy=100;
    this -> FoodStock=0;
    this -> WoodStock=0;
    this -> Level=1;
}