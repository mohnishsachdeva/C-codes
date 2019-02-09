#include "Headertest.h"



void main()
{
	int n, limit, stpoint;
	
	cout << "enter the iteration no.";
		cin >> n;
		cout << "enter the limit no.";
		cin >> limit;
		cout << "enter the starting no.";
		cin >> stpoint;

	input_arr(n,limit,stpoint);
	disp_arr(n);

	_getch();
}

