#include "stdafx.h"
#include <iostream>
#include "functions.h"
#include<conio.h>
double calculate(double a,double b,double(*func)(double,double));
double multiply(double a,double b);
double add(double a,double b);

int main()
{
	double a(0),b(0),rezult(0);
	double (*fpointer[2])(double,double)={multiply,add};
	using std::cout;
	using std::cin;
	do
	{   
		system("cls");
		cout<<"Enter number a: ";
		a=checkInput(a);
		cout<<"Enter number b: ";
		b=checkInput(b);
		for(int i=0;i<2;i++)
		{
			cout<<calculate(a,b,fpointer[i])<<std::endl;
		}
		cout<<"Continue?(ESC to exit/Enter-repeat): ";
	}while(getch()!=27);
}
double calculate(double a,double b,double(*func)(double,double))
{
    return func(a,b);
}
double multiply(double a,double b)
{
	return(a*b);
}
double add(double a,double b)
{
   return(a+b);
}