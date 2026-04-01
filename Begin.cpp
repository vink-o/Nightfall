#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void begin()
{
        int x=10;
        while(x!=3)
        {
            cout << "==================================================" << endl;
            cout << "                N I G H T F A L L                 " << endl;
            cout << "--------------------------------------------------" << endl;
            cout << "                   [1] LOG IN                     " << endl;
            cout << "                   [2] SIGN IN                    " << endl;
            cout << "==================================================" << endl;
            cout << " Choice:";

            int y;
            cin>>y;

            if(y==1)
            {
                system("cls");
            }
            else if(y==2)
            {
                system("cls");
            }
            else
            {
                system("cls");
                x=3;
            }
        }

        
}

int main()
{
    srand(time(0));
    begin();
    return 0;
}