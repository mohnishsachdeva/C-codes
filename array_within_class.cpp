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


class sorting
{
public:
	void sort(int arr[])
		{
			int minidex,temp,count=0;
	for(int i=0; i<n;i++)  
	{
		minidex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minidex])
			{
				minidex=j;
				count++;
				
			}
		}
		        temp=arr[minidex];
				arr[minidex]=arr[i];
				arr[i]=temp;
			
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
	sorting sor;
	sor.sort(arr);
	display dis;
	dis.disp();
		_getch();
}
