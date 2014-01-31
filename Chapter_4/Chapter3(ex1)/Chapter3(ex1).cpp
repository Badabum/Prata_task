// Chapter3(ex1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
struct human
{
	char firstName[40];
	char lastName[40];
	int age;
	char grade;
};
void main()
{
	human id;
	cout<<"What is your first name: ";
	cin.getline(id.firstName,41);
	cout<<"What is your last name: ";
	cin.getline(id.lastName,41);
	cout<<"What letter grade do you deserve: ";
	cin.get(id.grade);
	cout<<"What is your age: ";
	(cin>>id.age).get();
	cout<<"Name: "<<id.lastName<<", "<<id.firstName<<endl;
	cout<<"Grade: "<<(char)(id.grade+1)<<endl;
	cout<<"Age: "<<id.age<<endl;
	cin.get();


}

