#include <iostream>;
#include <conio.h>;
#include <random>;
#include <ctime>;
using namespace std;

void main()
{
	srand(time(0));
	for(int i=0;i<=10;i++)
	{
		cout<<rand()%20+20<<"\t";
	}

_getch();

}