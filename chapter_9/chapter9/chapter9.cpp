
#include "stdafx.h"
#include "golf.h"
#include "checkInput.h"
#include <iostream>

using std::cout;
using std::cin;

void main()
{
	golf *table;
	golf singlePlayer;
	int num(0),count(0);
	
	//set by non-interactive function
	setgolf(singlePlayer,"Tommy",21);
	showgolf(singlePlayer);
	cout<<"Enter number of players: ";
	num=checkInput(num);
	table=new golf[num];
    for (int i=0;i<num;i++)
    {
		if(setgolf(table[i])==0)
			break;
		else count++;
    }
	cout<<count<<std::endl;
	for (int j=0;j<count;j++)
	{
		showgolf(table[j]);
	}
    cin.get();
}

