#include "stdafx.h"
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
	int count=0,num_of_a=0,num_of_b=0;
	cout<<"Enter number of members: ";
	(cin>>count).get();
	member*List=new member[count];

	for(int i=0;i<count;i++)
	{
		cout<<"Enter name of member: ";
		getline(cin,List[i].name);
		cout<<"Enter donate value: ";
		(cin>>List[i].value).get();
	}
	cout<<"Grand patrons:"<<endl;
	for(int i=0;i<count;i++)
	{
		
		if(List[i].value>=10000)
		{
			num_of_a++;
			cout<<List[i].name<<"  "<<List[i].value<<endl;
		}
	}
			if(num_of_a==0)
			cout<<"none"<<endl;
   	cout<<"Patrons:"<<endl;
	for(int j=0;j<count;j++)
		if(List[j].value<10000)
		{
		cout<<List[j].name<<" "<<List[j].value<<endl;
		num_of_b++;
		}
		if(num_of_b==0)
			cout<<"none"<<endl;
		cin.get();
		

}