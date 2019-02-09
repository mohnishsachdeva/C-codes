#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
using namespace std;
int n;
int arr[100];



class inputarray
{
public:
	
	void input_array(int lim,int stpoint)
	{


		for(int i=0; i<n;i++)
		{
			arr[i]=rand()%lim+stpoint;
			cout<<arr[i]<<"\t";
		}
	
	}

};


class insertionsorting
{
public:
	void insertionsort(int arr[])
		{
			for(int i=1;i<n;i++)
			{
				int j=i-1;
				int key=arr[i];
				while(j>=0&&arr[j]>key)
				{
					arr[j+1]=arr[j];
					j--;
				}
			//arr[j+1]=arr[i];
				arr[j+1]=key;
			}
	}

};
class display
{
public:
	void disp()
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"\t";
		}
	}
	
};

void main()
{	
	cout<<"enter the no. of elements";
	cin>>n;
	inputarray ia;
	ia.input_array(50,1);
	insertionsorting sor;
	sor.insertionsort(arr);
	display dis;
	dis.disp();
		_getch();
}
