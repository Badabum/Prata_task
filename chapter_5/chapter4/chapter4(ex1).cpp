// chapter4(ex1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"
using namespace std;
void main()
{
	float a=0,b=0;
	int sum=0;
	cout<<"Enter first number: ";
    a=checkInput(a);
	cout<<"Enter secind number: ";
	b=checkInput(b);
	if(a>b)
	{
	  for(int i=b;i<=a;i++)
	  {
		  sum+=i;
	  }
	}
	else
	{
		for(int i=a;i<=b;i++)
		{
			sum+=i;
		}
	}
	cout<<"Sum is: "<<sum<<endl;
	cin.get();
}

