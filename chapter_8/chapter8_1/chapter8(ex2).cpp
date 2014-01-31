#include "stdafx.h"
#include <iostream>
#include <string>
struct CandyBar
{
	std::string name;
	double mass;
	int calories;
};
void show(const CandyBar& bar);
void setstr(char*str);
void set(CandyBar&bar,char*name="Millennium Munch",double mass=2.85,int calories=350);

void main()
{
	using std::cout;
	using std::cin;
	char name[80];
	double mass(0);
	int calor(0);
	CandyBar mybar;
	cout<<"Enter name of candy bar: ";
	cin.getline(name,80);
	cout<<"Enter mass value: ";
	(cin>>mass).get();
	cout<<"Enter calories: ";
	(cin>>calor).get();
	set(mybar,name,mass,calor);

	show(mybar);

	cin.get();

}

void show(const CandyBar& bar)
{
	std::cout<<"Name:"<<bar.name<<std::endl;
    std::cout<<"Mass: "<<bar.mass<<std::endl;
	std::cout<<"Calories: "<<bar.calories<<std::endl;
}
void set(CandyBar &bar,char*name,double mass,int calories)
{
	bar.name=name;
	bar.mass=mass;
	bar.calories=calories;

}

void setstr(char*str)
{
   std::cout<<"String: "<<str<<std::endl;
}