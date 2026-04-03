#ifndef MAP_H
#define MAP_H
#include<iostream>

class Map
{
    public:
        char grid[50][100];
        void Setting();
        void BuildLand();
        void GenerateWorld();

        void Land()
        {
            
            for(int i=0;i<50;i++)
            {
                for(int j=0;j<100;j++)
                    cout<<grid[i][j];

                cout<<endl;
            }
        };
};

#endif