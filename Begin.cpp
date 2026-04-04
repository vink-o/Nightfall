#include <string>
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
#include "sqlite3.h"
#include "HandleLogin.h"
using namespace std;

void begin()
{
    sqlite3* DB;
    sqlite3_open("nightfall.db", &DB);

    string sql = "CREATE TABLE IF NOT EXISTS USERS(""ID INTEGER PRIMARY KEY AUTOINCREMENT, ""USERNAME TEXT NOT NULL UNIQUE, ""PASSWORD TEXT NOT NULL);;";
    sqlite3_exec(DB, sql.c_str(), NULL, 0, NULL);

        int x=10;
        while(x!=3)
        {
            cout << "==================================================" << endl;
            cout << "                N I G H T F A L L                 " << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "                   [1] LOG IN                     " << endl;
            cout << "                   [2] SIGN IN                    " << endl;
            cout << "                   [3] EXIT                       " << endl;
            cout << "==================================================" << endl;
            cout << " Choice:";

            int y;
            cin>>y;

            if(y==1)
            {
                system("cls");
                HandleLogin(DB);
            }
            else if(y==2)
            {
                system("cls");
                HandleSignIn(DB);
            }
            else
            {
                system("cls");
                x=3;
            }
        }

        sqlite3_close(DB);
}

int main()
{
    srand(time(0));
    begin();
    return 0;
}