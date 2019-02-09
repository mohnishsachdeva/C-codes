#include "includefiles.h"

void input (int []);
void bubblesort (int []);
void disp();

void main()
{
	int arr[10];
	input(arr);
	HelloWorld();
	bubblesort(arr);
	_getch();
}

void input(int arr[])
{
	for(int i =0;i<10;i++)
	{
		arr[i]=rand()%50+1;
		cout<<arr[i]<<"\t";
	}
}

void bubblesort(int arr[])
{
	int temp;
	for(int i=0; i<10-1; i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}

		
		}
	
	}
		cout<<"sorted\n";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"\t";
	}


}
