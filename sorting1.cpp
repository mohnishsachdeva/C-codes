#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>
void input(int []);
void sort(int []);
void descsort(int []);

using namespace std;

void main()
{
	//srand(time(0));
	int arr[10];
	input(arr);
	sort(arr);
	descsort(arr);
	getch();
}

void input(int arr[])
{
	for(int i=0;i<10;i++)
	{
	arr[i]=rand()%100+10;
	cout<<arr[i]<<"\t";
	}
}

void sort(int arr[])
{
	int minidex,temp,count=0;
	for(int i=0; i<10;i++)  
	{
		minidex=i;
		for(int j=i+1;j<10;j++)
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

	cout<<"asc sorted array"<<"\n";
	for(int i=0; i<10;i++)
	{
		cout<<arr[i]<<"\t";
	
	}

}

void descsort(int arr[])
{
	int maxidex,temp,dcount=0;
	for(int i=0; i<10;i++)  
	{
		maxidex=i;
		for(int j=i+1;j<10;j++)
		{
			if(arr[j]>arr[i])
			{
				dcount++;
				maxidex=j;
				temp=arr[maxidex];
				arr[maxidex]=arr[i];
				arr[i]=temp;
			}
		}
			
	}

	cout<<"desc sorted array"<<"\n";
	for(int i=0; i<10;i++)
	{
		cout<<arr[i]<<"\t";
	
	}

}