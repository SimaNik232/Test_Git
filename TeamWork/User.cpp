#include "stdafx.h" 
#include "User.h" 

User::User(string l, string p) : login(l), password(p)
{
}

User::~User()
{
}

int User::access(string l, string p)  //проверка на доступ
{
	if ("1" == l && "123" == p) return 1;
	else if ("2" == l && "123" == p)  return 2;
	else return 3;
}