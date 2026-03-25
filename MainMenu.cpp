#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
using namespace std;

void Start()
{
    cout << R"(

                 / \  //\
        |\___/|      /   \//  .\
        /O  O  \__  /    //  | \ \
       /     /  \/_/    //   |  \  \
       @_^_@'/   \/_   //    |   \   \
       //_^_/     \/_ //     |    \    \
    ( //) |        \///      |     \     \
  ( / /) _|_ /   )  //       |      \     _
( // /) '/,_ _ _/  ( ; -.    |    _ _\.-~        .-~~~^-.
(( // )) ,-{        _      `-.|.-~-.           .~         `.
(( /// ))  '/\      /                 ~-. _ .-~      .-~^-.  \
(( ///))      `.   {            }                 /      \  \
 ((/ ))     .----~-.\        \-'               .~         \  `. \^-. 
           ///.----..>        \            _ -~             `.  ^-`  ^-_
             ///-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~ )";

    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"[Press ENTER to start game]"<<endl;
    cin.ignore();
    cin.get();
}

void lore()
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
            lore();
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

int main()
{
    srand(time(0));
    MainMenu();
    return 0;
}