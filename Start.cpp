#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
#include "Lore.h"
#include "Start.h"
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