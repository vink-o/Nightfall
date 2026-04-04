#ifndef HANDLELOGIN_H
#define HANDLELOGIN_H
#include "sqlite3.h"

void HandleLogin(sqlite3* DB);
void HandleSignIn(sqlite3* DB);

#endif