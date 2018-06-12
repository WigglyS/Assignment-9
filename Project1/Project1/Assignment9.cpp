// Assignment9.cpp : Defines the entry point for the console application.
//

#include "iostream"
#include "string"
#include "vector"

using namespace std;

//declaring my functions
string& referncer(vector<string>& stuff, int num);
void badswap(int x, int y);
void goodswap(int& x, int& y);

//declaring a vector with strings named stuff
vector<string> stuff;

// where c++ programs always start from
int main()
{

	stuff.push_back("stuff1");
	stuff.push_back("stuff2");
	stuff.push_back("stuff3");
	stuff.push_back("stuff4");

	//declaring initializing/assigning
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values \n";
	cout << "myscore is: " << myScore << endl;
	cout << "yourScore is: " << yourScore << endl;
	cout << "\n\n";

	//calling function and caling two arguments
	badswap(myScore, yourScore);
	cout << "BadSwap values\n";
	cout << "myscore is: "<< myScore << endl;
	cout <<"yourScore is: "<< yourScore << endl;
	cout << "\n\n";

	//calling function and caling two arguments
	goodswap(myScore, yourScore);
	cout << "GoodSwap values\n";
	cout << "myscore is: " << myScore << endl;
	cout << "yourScore is: " << yourScore << endl;
	cout << "\n\n";

	//the function returns a refrence and is put in the refrence rStr then it gets changed
	string& rStr = referncer(stuff, 0);
	rStr = "not stuff";
	cout << rStr << endl;

	system("pause");
	return 0;
}

//function that returns a refrence to the value of num in the vector
string& referncer(vector<string>& stuff, int num)
{
	return stuff[num];
}

//ffunction that takes copys of the arguments
void badswap(int x, int y) 
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}
//function that takes refrences of the arguments
void goodswap(int& x, int& y) 
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}