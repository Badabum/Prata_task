#include "stdafx.h"
#include <cctype>
#include <vector>
using namespace std;
const int strsize=80;
struct bop_mem
{
	char realname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
void main()
{
	bop_mem list[3]={{"Harryson","master","robocop",2},{"Terry Pop","nanny","dzhedy",1},{"Tomas","junior","cook",0}};
	char choose;
    cout<<"Choose some variant: "<<endl;
	cout<<"a)real name         b)title\n c)bopname        d)preference\nq)quit"<<endl;
	(cin.get(choose)).get();
	while((choose!='a')&&(choose!='b')&&(choose!='c')&&(choose!='d')&&(choose!='q'))
		{
			cout<<"Wow wow. Enter a,b,c,d or q: ";
				(cin.get(choose)).get();
				cout<<"choose: "<<choose<<endl;

		}
	switch (choose)
	{
		case 'a':
				for(int i=0;i<3;i++)
					cout<<list[i].realname<<endl;
			    break;
		case 'b':
			for(int i=0;i<3;i++)
					cout<<list[i].title<<endl;
			break;
		case 'c':
			for(int i=0;i<3;i++)
				cout<<list[i].bopname<<endl;
			break;
		case 'd':
			for(int i=0;i<3;i++)
				if(list[i].preference==0)
					cout<<list[i].realname<<endl;
				else if(list[i].preference==1)
					cout<<list[i].title<<endl;
				else if(list[i].preference==2)
					cout<<list[i].bopname<<endl;
			break;
		case 'q':
			break;
		default:
			break;
	}
	cin.get();

}