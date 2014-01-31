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
	CandyBar candys[3]={{"Candy1",3.3,351},{"Candy12",3.2,352},{"Candy3",3.2,353}};
	for(int i=0;i<3;i++)
	{
		cout<<"Name of candys["<<i+1<<"]:"<<candys[i].name<<endl;
		cout<<"Weight of candys["<<i+1<<"]:"<<candys[i].weight<<endl;
		cout<<"Calories of candys["<<i+1<<"]:"<<candys[i].calories<<endl;
	}
	cin.get();
	return 0;
}