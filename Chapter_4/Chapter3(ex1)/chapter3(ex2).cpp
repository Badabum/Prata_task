#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name="";
	string dessert="";
	cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"Enter your favourite dessert: ";
	getline(cin,dessert);
	cout<<"I have some dilicious "<<dessert<<" for you,"<<name<<endl;
	cin.get();
	return 0;
}