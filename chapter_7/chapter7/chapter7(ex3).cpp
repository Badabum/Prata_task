#include "stdafx.h"
#include <iostream>
#include "functions.h"
using std::cout;
using std::cin;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
} ;

void show(box item);

void multiply(box *item);

void main()
{
	box newBox;
	cout<<"Enter maker of the box: ";
	cin.getline(newBox.maker,40);
	cout<<"Enter height of the box: ";
	newBox.height=checkInput(newBox.height);
	cout<<"Enter width of the box: ";
	newBox.width=checkInput(newBox.width);
	cout<<"Enter lenght of the box: ";
	newBox.length=checkInput(newBox.length);

    multiply(&newBox);
    cout<<"This is the volume of the box: "<<newBox.volume<<std::endl;

	cout<<"Displaing: ";
	show(newBox);

	cin.get();
}
void show(box item)
{
	cout<<"Maker: "<<item.maker<<std::endl;
	cout<<"Height: "<<item.height<<std::endl;
	cout<<"Width: "<<item.width<<std::endl;
	cout<<"Lenght: "<<item.length<<std::endl;
	cout<<"Volume: "<<item.volume<<std::endl;
}

void multiply(box *item)
{
	item->volume=item->height*item->length*item->width;
}