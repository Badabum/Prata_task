#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>

using std::array;
using std::string;

const int Seasons=4;
const char *Season[4]={"Summer","Winter","Fall","Spring"};
void fill(double pa[]);
void show(double da[]);

int main()
{
	double expences[Seasons]={0.0};
	fill(expences);
	show(expences);
	std::cin.get();
	return 0;
}
void fill(double pa[])
{
	using std::cin;
	for(int i=0;i<Seasons;i++)
	{
		std::cout<<"Enter "<<Season[i]<< " expences:";
		(cin>>pa[i]).get();
	}
}
void show(double da[])
{
	double total(0.0);
	std::cout<<"EXPENCES"<<std::endl;
	for (int i=0;i<Seasons;i++)
	{
		std::cout<<Season[i]<<": $"<<da[i]<<std::endl;
		total+=da[i];
	}

	std::cout<<"Total Expences: $"<<total<<std::endl;
}

