#include "stdafx.h"
#include "functions.h"
#include<string>
using namespace std;
struct car
{
	string company;
	int year;
};
void main()
{
	int amount=0;
	car *carTable;
	cout<<"Enter amount of cars: ";
	amount=checkInput(amount);
	carTable=new car[amount];
	for(int i=0;i<amount;i++)
	{
		cout<<"Car #"<<i<<": "<<endl;
		cout<<"Enter company name : ";
		getline(cin,carTable[i].company);
		cout<<"Enter year: ";
		carTable[i].year=checkInput(carTable[i].year);
	}
	cout<<"Here is your collection: "<<endl;
	for(int i=0;i < amount ;i++)
	{

		cout<<carTable[i].year<<" "<<carTable[i].company<<endl;
	}
	cin.get(); 
}