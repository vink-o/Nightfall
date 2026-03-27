#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
#include "Lore.h"
using namespace std;

void Lore()
{
    string line;
    ifstream Lore("Lore.txt");

    if(!Lore.is_open())
    {
        cout<<"Lore cannot be open now!"<<endl;
        return;
    }

    while(getline(Lore,line))
        cout<<line<<endl;

    Lore.close();
    cout<<"[Press ENTER to go back]"<<endl;

    cin.ignore();
    cin.get();
}