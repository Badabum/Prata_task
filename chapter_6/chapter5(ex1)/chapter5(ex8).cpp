#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
struct member
{
	string name;
	float value;
};
void main()
{
	string directory="C:\\";
	string filename="";
	char a='a';
	int count=0;
	ifstream file;
	cout<<"Enter the name: ";
	cin>>filename;
	filename=directory+filename+".txt";
	file.open(filename);
	while(file.good())
	{
		file>>a;
		count++;

	}
	count--;
	file.close();
	cout<<"Number of characters in file: "<<count<<endl;
	cin.get();
	cin.get();
	

}