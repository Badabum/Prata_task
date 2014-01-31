#include<iostream>
float checkInput(float number)
{
	using std::cin;
	cin>>number;
	while(cin.get()!='\n')
	{
		std::cout<<"Error.Its must be a number!"<<std::endl;
		cin.clear();
		cin.sync();
		cin>>number;
	}
	return(number);

}
int checkInput(int number)
{
	using std::cin;
	cin>>number;
	while(cin.get()!='\n')
	{
		std::cout<<"Error.Its must be a number!"<<std::endl;
		cin.clear();
		cin.sync();
		cin>>number;
	}
	return(number);

}
double checkInput(double number)
{
	using std::cin;
	cin>>number;
	while(cin.get()!='\n')
	{
		std::cout<<"Error.Its must be a number!"<<std::endl;
		cin.clear();
		cin.sync();
		cin>>number;
	}
	return(number);

}