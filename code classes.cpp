#include <iostream>
#include <conio.h>
using namespace std;

class Box
{
public:
double L;
double B;
double H;
};

void main()
{
	Box b1;
	Box b2;
	double volume=0.0;

	b1.L =2;
	b1.B =3;
	b1.H =4;

	b2.H=5;
	b2.L =7;
	b2.B =6;

	volume = b1.B*b1.H*b1.L;
	cout<<"volume of first box "<< volume<<endl;

	volume= b2.B*b2.H*b2.L;
	cout<<"volume of first box "<< volume;

	_getch();
}