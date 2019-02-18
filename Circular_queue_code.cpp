#include <iostream>
#include <conio.h>

using namespace std;

#define A_SIZE 5
int arr[A_SIZE];

int dindex = -1;
int eindex = -1;
int element;

bool isFull()
{
	if ((dindex == eindex+1) || (dindex ==0 && eindex == A_SIZE-1))
	{
		return true;
	
	}
	else
	{
		return false;

	}
}

bool isEmpty()
{
	if (((dindex && eindex)==0) || (dindex ==eindex))
		return true;
	else
		return false;
}

void enqueue()
{
	if (isFull())
		cout << "full";
	else
	{
		if (dindex == -1)
		dindex = 0;
		
		cout << "enter the element \n \n \n";
		cin >> element;
		cout << "\n";
		eindex=((eindex+1)%A_SIZE);
		arr[eindex] = element;
		
			
	}
}

void f_dequeue()
{
	if (isEmpty())
		cout << "empty\n";
	else
	{
		element = arr[dindex];
		
		if (dindex == eindex)
		{
			eindex = dindex = -1;
		}
		else
		{
			dindex = ((dindex + 1) % A_SIZE);
		}
	}
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
	for (int i = dindex; i < A_SIZE; i++)
	{

		cout << arr[i] << "\t\n\n \n";
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

	enqueue();
	disp_arr();

	enqueue();
	disp_arr();

	_getch();
}