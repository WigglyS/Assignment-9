// Assignment9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "vector"

using namespace std;

string& referncer(vector<string>& stuff, int num);

vector<string> stuff;

int main()
{
	stuff.push_back("stuff1");
	stuff.push_back("stuff2");
	stuff.push_back("stuff3");
	stuff.push_back("stuff4");

	string& rStr = referncer(stuff, 0);
	cout << rStr << endl;


	system("pause");
    return 0;
}

string& referncer(vector<string>& stuff, int num)
{
	return stuff[num];
}
