#include "stdafx.h"
#include<cstring>
using namespace std;
struct CandyBar
{
	char name[40];
	float weight;
	int calories;
};
int main()
{
	int n=0;
	cout<<"Enter the nummber of candys: ";
	cin>>n;
	CandyBar *candys=new CandyBar[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the name of candys["<<i+1<<"]:";
		cin>>candys[i].name;
		cout<<"Enter the weight of candys["<<i+1<<"]:";
		cin>>candys[i].weight;
		cout<<"Enter the number of calories of candys["<<i+1<<"]:";
		(cin>>candys[i].calories).get();
	}
	cout<<"This is list of candyes: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Name of candys["<<i+1<<"]:"<<candys[i].name<<endl;
		cout<<"Weight of candys["<<i+1<<"]:"<<candys[i].weight<<endl;
		cout<<"Calories of candys["<<i+1<<"]:"<<candys[i].calories<<endl;
	}
	cin.get();
	return 0;
}