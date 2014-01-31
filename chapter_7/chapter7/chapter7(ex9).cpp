#include "stdafx.h"
#include <iostream>
#include "functions.h"

using std::cin;
using std::cout;

const int SLEN=30;
struct student
{
	char fullname[SLEN];
	char hobby [SLEN];
	 int ooplevel;
};

int getinfo(student pa[],int size);
void display1(student st);
void display2(const student*ps);
void display3(const student pa[],int size);

int main()
{
	int class_size(0);
	cout<<"Enter class size: ";
	class_size=checkInput(class_size);
	student *ptr_stu=new student[class_size];
	int entered=getinfo(ptr_stu,class_size);
	for (int i=0;i<entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete[] ptr_stu;
	cout<<"Done"<<std::endl;
	cin.get();
	return 0;
}
int getinfo(student pa[],int size)
{
	int counter(0);
	for(int i=0;i<size;i++)
	{
		cout<<"Enter student #"<<i<<" name: ";
		cin.getline(pa[i].fullname,SLEN);
		if(strlen(pa[i].fullname)==0)
			break;
		cout<<"Enter student #"<<i<<" hobby: ";
		cin.getline(pa[i].hobby,SLEN);
		cout<<"Enter student #"<<i<<" Level: ";
		pa[i].ooplevel=checkInput(pa[i].ooplevel);
		counter++;
	}
	return(counter);
}
void display1(student st)
{
	cout<<"Display1 called: "<<std::endl;
	cout<<"Student's name: "<<st.fullname<<std::endl;
	cout<<"Student's hobby: "<<st.hobby<<std::endl;
	cout<<"Student's ooplevel: "<<st.ooplevel<<std::endl;
}
void display2(const student*ps)
{
	cout<<"Display2 called: "<<std::endl;
	cout<<"Student's name: "<<ps->fullname<<std::endl;
	cout<<"Student's hobby: "<<ps->hobby<<std::endl;
	cout<<"Student's ooplevel: "<<ps->ooplevel<<std::endl;
}
void display3(const student pa[],int size)
{
	cout<<"Display3 called: "<<std::endl;
	for (int i=0;i<size;i++)
	{
		cout<<"Student #"<<i<<": "<<std::endl;
		cout<<"Student's name: "<<pa[i].fullname<<std::endl;
		cout<<"Student's hobby: "<<pa[i].hobby<<std::endl;
		cout<<"Student's ooplevel: "<<pa[i].ooplevel<<std::endl;
	}
}
