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

void Map :: BuildLand()
{
    Setting();
    int herb = 15;
    int mine = 5;
    int lake = 10;

    if(grid[25][50]== '+') // postavljanje baze u centar mape
        grid[25][50]='ô';

    while(lake!=0)
    {
        int x = rand() % 50;
        int y = rand() % 100;

        if(grid[x][y]=='+')
        {
            grid[x][y]='~';
            lake --;
        }
    }
    while(mine!=0)
    {
        int x = rand() % 50;
        int y = rand() % 100;

        if(grid[x][y]=='+')
        {
            grid[x][y]='¤';
            mine --;
        }
    }
    while(herb!=0)
    {
        int x = rand() % 50;
        int y = rand() % 100;

        if(grid[x][y]=='+')
        {
            grid[x][y]='§';
            herb--;
        }

    }
}