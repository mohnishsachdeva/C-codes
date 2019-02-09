#include <iostream>
#include <conio.h>

using namespace std;

#define A_SIZE 5
int arr[A_SIZE];

int dindex = 0;
int eindex = 0;
int element;

bool isEmpty()
{
	if (dindex == eindex)
		return true;
	else
		return false;
}

bool isFull()
{
	if ( eindex==A_SIZE)
		return true;
	else
		return false;
}


void enqueue()
{
	if (isFull())
		cout << "full";
	else
		cout << "enter the element \n \n \n";
	cin >> element;
	arr[eindex] = element;
	eindex++;
}

void f_dequeue()
{

	if (isEmpty())
		cout << "empty\n";
	else

		element = arr[dindex];
	dindex++;
}

void r_dequeue()
{
	if (isEmpty())
		cout << "empty\n";
	else
		element = arr[eindex];
	eindex--;
}

int display()
{
	if (isEmpty())
		cout << "empty";
	else
		element = arr[eindex];
	return element;
}

void disp_arr()
{
	for (int i = dindex; i < eindex; i++)
	{

		cout << arr[i] << "\t\n\n";
	}

}

void main()
{
	enqueue();
	disp_arr();

	enqueue();
	disp_arr();

	enqueue();
	disp_arr();

	enqueue();
	disp_arr();

	f_dequeue();
	disp_arr();

	r_dequeue();
	disp_arr();

	_getch();
}