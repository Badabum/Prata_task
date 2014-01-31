#include "stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;
float bmi(int &feet,int &inches,float &weight)
{
	float bmi=0;
	const int inch_koef=12;
	const float meters_koef=0.0254;
	const float kg_koef=2.2;
	//feets and inches to inches
	inches+=(feet*inch_koef);
	inches*=meters_koef;//to meters
	weight/=kg_koef;
	bmi=weight/(inches*inches);
	return(bmi);
}
void main()
{
	int feets=0,inches=0;
	float pounds=0;
	cout<<"Enter your hight please\nFeets: ";
	feets=checkInput(feets);
	cout<<"Inches: ";
	inches=checkInput(inches);
	cout<<"Enter your weight in pounds,please: ";
	pounds=checkInput(pounds);
	cout<<"Your BMI is: "<<bmi(feets,inches,pounds);
	cin.get();
	
}