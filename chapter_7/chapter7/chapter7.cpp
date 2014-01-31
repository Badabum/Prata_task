// chapter7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
float function(float first,float second);
void main()
{
	float first=0.0,second(0.0);
	do
	{
		std::cout<<"Enter first number: ";
		std::cin>>first;
		std::cout<<"Enter second number: ";
		std::cin>>second;
		std::cout<<"Rezult: "<<function(first,second)<<std::endl;
	}while(function(first,second)!=0);
	std::cin.get();
}
float function(float first,float second)
{
	return(2*first*second/(first+second));
}


