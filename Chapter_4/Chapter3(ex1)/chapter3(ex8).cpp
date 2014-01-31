#include "stdafx.h"
#include </Users/KPIshnyk/Documents/Visual Studio 2010/Projects/Chapter1/Chapter1/functions.h>
using namespace std;
struct pizza
{
	string compName;
	float diam;
	float weight;
};
int main()
{
	pizza * my_pizza=new pizza;
	cout<<"Enter the diameter of the pizza: ";
	my_pizza->diam=checkInput(my_pizza->diam);
	cout<<"Enter the name of company wich produce pizza: ";
	getline(cin,my_pizza->compName);
	cout<<"Enter the weight of the pizza: ";
	my_pizza->weight=checkInput(my_pizza->weight);

	cout << "Company name: " << my_pizza->compName << endl << "Diameter: " << my_pizza->diam << endl << "Weight: " <<my_pizza->weight<<endl;
	cin.get();
	return 0;
}