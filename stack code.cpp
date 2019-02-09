

#include <iostream>
#include <conio.h>
# include<random>
# include<ctime>


using namespace std;


#define ARRAY_SIZE 5
int arr[ARRAY_SIZE];
int num;


int index = -1;

bool isfull()
{

	if (index == ARRAY_SIZE)
		return true;
	else
		return false;
}

bool isempty()
{

	if (index == -1)
		return true;
	else
		return false;
}


void push()
{
	if (isfull())
	{
		cout << "full";
	}
	else
	{

		index++;
		cout << "enter te number"<<"\n";
		cin >> num;
		arr[index] = num;
	}
}

int pop()
{
	if (isempty())
	{
		cout << "empty";
		return 0;
	}
	else
	{
		 num=arr[index];
		index--;
		return num;
	}
}

int top()
{
	if (isempty())
	{
		cout << "empty";
		return -1;
	}
	else
	{
		num = arr[index];
		return num;
	}
}

void disp_arr(int n)
{

	for (int i = 0; i <= index; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	push();
	disp_arr(ARRAY_SIZE);
	push();
	disp_arr(ARRAY_SIZE);
	push();
	disp_arr(ARRAY_SIZE);
	pop();
	disp_arr(ARRAY_SIZE);
	pop();
	disp_arr(ARRAY_SIZE);
	_getch();
}