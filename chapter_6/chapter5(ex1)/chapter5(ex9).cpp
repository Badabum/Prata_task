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
	member *members;
	ifstream file;
	string directory="C:\\";
	string filename="";
	int numOfRec=0;
	int i=0,num_of_a=0,num_of_b=0;
	cout<<"Enter filename: ";
	(cin>>filename).get();
	filename=directory+filename+".txt";
	file.open(filename);
	file>>numOfRec;
	file.get();
	members=new member[numOfRec];
	while(!file.eof())
	{
		
		getline(file,members[i].name);
		(file>>members[i].value).get();
		i++;
	}
	cout<<"Grand patrons:"<<endl;
	for(int i=0;i<numOfRec;i++)
	{
		
		if(members[i].value>=10000)
		{
			num_of_a++;
			cout<<members[i].name<<"  "<<members[i].value<<endl;
		}
	}
			if(num_of_a==0)
			cout<<"none"<<endl;
   	cout<<"Patrons:"<<endl;
	for(int j=0;j<numOfRec;j++)
		if(members[j].value<10000)
		{
		cout<<members[j].name<<" "<<members[j].value<<endl;
		num_of_b++;
		}
		if(num_of_b==0)
			cout<<"none"<<endl;
		cin.get();




	
}