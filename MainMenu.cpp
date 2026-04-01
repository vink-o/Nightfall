#include "Lore.h"
#include "Start.h"
#include "MainMenu.h"
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void MainMenu()
{
    int n=10;

    while(n!=4)
    {
        system("cls");
        cout << "==================================================" << endl;
        cout << "                N I G H T F A L L                 " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "  [1] START GAME          [2] LORE                " << endl;
        cout << "  [3] BEST SCORES         [4] EXIT                " << endl;
        cout << "==================================================" << endl;
        cout << " Choice:";

        int i;
        cin>>i;

        if(i==1)
        {
            system("cls");
            Start();

        }
        else if(i==2)
        {
            system("cls");
            Lore();
        }
        else if(i==3)
        {
            system("cls");
        }
        else 
        {
            system("cls");
            n=4;
        }
    }
}

void game()
{
    srand(time(0));
    MainMenu();
}