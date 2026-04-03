#include "GenerateWorld.h"
#include "Map.h"
#include "Character.h"

#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void GenerateWorld()
{
    Map m;
    Character c;

    m.BuildLand();

    LUMBERJACK l(25,50);
    WARRIOR w (25,50);
    HEALER h (25,50);
    HUNTER H (25,50);
    BUILDER b (25,50);
    MINER M (25,50);

    m.grid[l.GetX()][l.GetY()] = 'L';
    m.grid[w.GetX()][w.GetY()] = 'W';
    m.grid[h.GetX()][h.GetY()] = 'h';
    m.grid[H.GetX()][H.GetY()] = 'H';
    m.grid[b.GetX()][b.GetY()] = 'B';
    m.grid[M.GetX()][M.GetY()] = 'M';

    m.Land();
}