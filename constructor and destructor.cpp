#include <iostream>
#include <conio.h>
using namespace std;

class Line
{
public:
	void setLen(double len);
	double getLen(void);
	//Line(); // Constructor
	Line(double len);	
private: 
	double lenght;
};

Line::Line(double len)
{
	cout<<"constructor lenght= "<<len<<endl;
}

void Line:: setLen(double len)
{
	lenght=len;
}

double Line::getLen(void)
{
	return lenght;
}

void main()
{
	Line line(23.0);

		cout<<"lenght of line"<<line.getLen()<<endl;

		line.setLen(56);
		cout<<"lenght of line"<<line.getLen()<<endl;

		_getch() ;
}