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
	CandyBar snack={"Moncha Munch",2.3,350};
	cout<<"Name: "<<snack.name<<endl<<"Weight: "<<snack.weight<<endl<<"Calories: "<<snack.calories<<endl;
	cin.get();
	return 0;
}