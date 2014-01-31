#include "stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;

void main()
{
	long long int Earth_pop=0,country_pop=0;
	float percent=0;
	char name[40];
	cout<<"Enter the population of the Earth: ";
	cin>>Earth_pop;
	cout<<"Enter the name of your country: ";
	cin.get();
	cin.getline(name,40);
	cout<<"Enter the population of your country: ";
	cin>>country_pop;
	percent=((float)country_pop/(float)Earth_pop)*100;
	cout<<"The population of the "<<name<<" is "<<percent<<"% of the world population"<<endl;
	cin.get();
	cin.get();
}