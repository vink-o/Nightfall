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
    vector <LUMBERJACK> lumberjack;
    vector <HEALER> healer;
    vector <HUNTER> hunter;
    vector <MINER> miner;
    vector <BUILDER> builder;
    vector <WARRIOR> warrior;

    Map m;
    Character c;

    m.BuildLand();

    int n_lumberjack=8;
    int n_healer=3;
    int n_hunter=6;
    int n_miner=5;
    int n_builder=3;
    int n_warrior=10;

    for(int i=0;i<n_lumberjack;i++)
    {
        LUMBERJACK l(25,50);
        lumberjack.push_back(l);
        m.grid[l.GetX()][l.GetY()] = 'L';
    }
    for(int i=0;i<n_warrior;i++)
    {
         WARRIOR w (25,50);
         warrior.push_back(w);
         m.grid[w.GetX()][w.GetY()] = 'W';
    }
    for(int i=0;i<n_healer;i++)
    {
         HEALER h (25,50);
         healer.push_back(h);
         m.grid[h.GetX()][h.GetY()] = 'H';
    }
    for(int i=0;i<n_hunter;i++)
    {
        HUNTER H (25,50);
        hunter.push_back(H);
        m.grid[H.GetX()][H.GetY()] = 'h';
    }
    for(int i=0;i<n_builder;i++)
    {
        BUILDER b (25,50);
        builder.push_back(b);
        m.grid[b.GetX()][b.GetY()] = 'B';
    }
    for(int i=0;i<n_miner;i++)
    {
        MINER M (25,50);
        miner.push_back(M);
        m.grid[M.GetX()][M.GetY()] = 'M';
    }


    m.Land();
}