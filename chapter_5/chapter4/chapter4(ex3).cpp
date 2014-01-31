#include "stdafx.h"
#include "functions.h"
using namespace std;

void main()
{
	float sum=0;
	float num=0;

	do
	{
		sum+=num;
		cout<<"Sum= "<<sum<<endl;
		cout<<"Enter a number: ";
			num=checkInput(num);
	}while(num!=0);
}