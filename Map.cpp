#include "Map.h"
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void Map :: Setting()
{
    for(int i=0;i<50;i++)
    {
        for(int j=0;j<100;j++)
            grid[i][j]='+';
    }
}