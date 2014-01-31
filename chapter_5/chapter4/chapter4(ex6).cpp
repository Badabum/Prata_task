#include "stdafx.h"
#include "functions.h"
#include<string>
using namespace std;
void main()
{
	string month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int massive[3][12]={0};
	int total_sum=0,sum_per_year[3]={0};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
		cout<<"Amount in "<<month[j]<<": ";
		massive[i][j]=checkInput(massive[i][j]);
        sum_per_year[i]+=massive[i][j];       
		}
		cout<<"Sum per year= "<<sum_per_year[i]<<endl;
		total_sum+=sum_per_year[i];
	}
	cout<<"Total amount: "<<total_sum<<endl;
	cin.get();
}