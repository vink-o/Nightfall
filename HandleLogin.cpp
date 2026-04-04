#include <string>
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include <cstdlib>
#include "sqlite3.h"
#include "HandleLogin.h"
#include "MainMenu.h"
#include "sqlite3.h"
using namespace std;

void HandleSignIn(sqlite3* DB)
{
    string username, password;

    cout<<"--- CREATE ACCOUNT ---"<<endl;
    cout<<endl;
    cout<<"Create username:";
    cin>>username;
    cout<<"Create password:";
    cin>>password;

    string sql = "INSERT INTO USERS (USERNAME, PASSWORD) VALUES ('"+ username + "', '" + password +"');";
    char* zErrMsg = 0;
    int rc = sqlite3_exec(DB, sql.c_str(), NULL, 0, &zErrMsg);

    if(rc!=SQLITE_OK)
    {
        cout<<"This username is already used!"<<endl;
        sqlite3_free(zErrMsg);
    }
    else 
    {
        cout<<"Account successfully created!"<<endl;
        system("pause");
        system("cls");

        MainMenu(DB,username);
        return;
    }
}

void HandleLogin(sqlite3* DB)
{
    string username, password;

    cout<<"--- LOG IN ---"<<endl;
    cout<<endl;
    cout<<"Enter username:";
    cin>>username;
    cout<<"Enter password:";
    cin>>password;

    string query = "SELECT * FROM USERS WHERE USERNAME ='"+ username +"' AND PASSWORD = '"+ password +"';";
    sqlite3_stmt* stmt;

    if(sqlite3_prepare_v2(DB, query.c_str(), -1, &stmt, NULL) == SQLITE_OK)
    {
        if(sqlite3_step(stmt) == SQLITE_ROW)
            cout<<"Login successfull!"<< username << "!"<<endl;

        system("pause");
        system("cls");

        MainMenu(DB,username);
        return;
    }

    else    
        cout<<"Invalid username or password!"<<endl;

    
}