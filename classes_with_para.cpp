#include <iostream>
#include <conio.h>
using namespace std;

class Box
{
public:
double L;
double B;
double H;

double getVolume(void);
void setLen(double l);
void setBre(double b);
void setHei(double h);

/*double getVolume(void)
	{
		return L*B*H;
	}
	*/
};


double Box::getVolume(void)
	{
		return L*B*H;
	}
	
void Box::setLen(double l)
	{
		L=l;
	}

void Box::setBre(double b)
	{
		B=b;
	}

void Box::setHei(double h)
	{
		H=h;
	}


void main()
{
	Box b1;
	Box b2;
	double volume=0.0;

	b1.setLen(2);
	b1.setHei(2);
	b1.setBre(2);

	b2.setLen(3);
	b2.setBre(3);
	b2.setHei(3);

	volume=b1.getVolume();
	cout<<"vol of box1:"<<volume<<endl;

	volume= b2.getVolume();
	cout<<"vol of box2:"<<volume<<endl;

	_getch();
}