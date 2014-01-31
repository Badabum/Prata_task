#include "stdafx.h"
#include<array>
using namespace std;

void main()
{
	float sum=0;
	array<float,3>rezults;
for(int i=0;i<3;i++)
{
	cout << "Enter rezult number 1: ";
	(cin>>rezults[i]).get();
	sum+=rezults[i];
}
sum=sum/3;
for(int i=0;i<3;i++)
{
	cout << "Rezult number "<<i<<": "<<rezults[i]<<endl;
}
cout<<"Sum= "<<sum<<endl;
cin.get();
}