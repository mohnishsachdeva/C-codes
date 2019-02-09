#include <iostream>
#include <conio.h>
# include<random>
# include<ctime>


using namespace std;


#define ARRAY_SIZE 100
int arr[ARRAY_SIZE];


void input_arr(int n, int lim, int stpoint)
{
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%lim + stpoint;
		cout << arr[i] << "\t";
	}
	
}
void disp_arr(int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}