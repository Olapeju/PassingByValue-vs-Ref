#include <iostream>
#include "Minimum.h"
using namespace std;



int main()
{
	//demostrates minimum with integer values
	int int1, int2;
	cout << "Enter two integer values: " << endl;
	cin >> int1 >> int2;

	cout << "The minimum of the values inputed is: " << minimum(int1, int2) << endl;


	//demostrates minimum with character values
	char char1, char2;
	cout << "Enter two character values: " << endl;
	cin >> char1 >> char2;

	cout << "The minimum of the values inputed is: " << minimum(char1, char2) << endl;

	//demostrates minimum with double values
	double double1, double2;
	cout << "Enter two double values: " << endl;
	cin >> double1 >> double2;

	cout << "The minimum of the values inputed is: " << minimum(double1, double2) << endl;
}