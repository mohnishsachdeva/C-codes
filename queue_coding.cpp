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
	if (eindex == A_SIZE)
		return true;
	else
		return false;
}

void enqueue()
{
	
	if (isFull())
		cout << "full";
	else
		cout << "enter the element \n \n";
		cin >> element;
		
		arr[eindex] = element;
		eindex++;
}

void dequeue()
{
	
	if (isEmpty())
		cout << "empty\n";
	else

		element = arr[dindex];
	dindex++;
}

int display()
{
	if (isEmpty())
		cout << "empty\n";
	else
		element = arr[eindex];
	return element;

}

void disp_arr()
{

	for (int i = dindex; i < eindex; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	enqueue();
	disp_arr();
	enqueue();
	disp_arr();

	enqueue();
	disp_arr();

	display();
	disp_arr();

	dequeue();
	disp_arr();

	dequeue();
	disp_arr();

	_getch();
}
