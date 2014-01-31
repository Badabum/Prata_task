#include "stdafx.h"
#include "functions.h"
using namespace std;
void main()
{
	cout<<"Hello"<<endl;
	float dafcur_balance=100,daf_balance=100;
	float cleo_balance=100;
	int years=0;
	do
	{
		years++;
		dafcur_balance+=daf_balance*0.1;
		
		cleo_balance+=cleo_balance*0.05;

	}while(dafcur_balance>=cleo_balance);

	cout<<"Years = "<<years<<endl;

	cin.get();
}