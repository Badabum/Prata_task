#include "stdafx.h"
#include <cctype>
#include <vector>
using namespace std;
void main()
{
	char choose;
	cout<<"Choose some variant: "<<endl;
	cout<<"a)tree         b)apple\n c)football        d)hockey"<<endl;
	(cin.get(choose)).get();
	while((choose!='a')&&(choose!='b')&&(choose!='c')&&(choose!='d'))
		{
			cout<<"Wow wow. Enter a,b,c,or d: ";
				(cin.get(choose)).get();
				cout<<"choose: "<<choose<<endl;

		}
	switch (choose)
	{
		case 'a':
				cout<<"tree"<<endl;
			    break;
		case 'b':
			cout<<"apple"<<endl;
			break;
		case 'c':
			cout<<"football"<<endl;
			break;
		case 'd':
			cout<<"hockey"<<endl;
			break;
		default:cout<<"What?"<<endl;
			break;
	}
	cin.get();
}