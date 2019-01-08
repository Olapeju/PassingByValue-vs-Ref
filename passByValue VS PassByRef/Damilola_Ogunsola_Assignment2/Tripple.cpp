#include <iostream>
using namespace std;



int tripleByValue(int); //function prototype(value pass)
void tripleByReference(int &); //function prototype(reference pass)


int main()
{
	int count;

	cout<< "enter the value to be trippled" <<endl;
	cin >> count;



	//this section demostrate passing arguments to functions by values
	cout << "The value entered is :" << count << endl;
	cout << "The value returned by tripleByValue is: " << tripleByValue(count) << endl;
	cout << "The value of count after tripleByValue is: " << count << endl;


	//this section demostrate passing arguments to functions by reference
	cout << "The value entered is :" << count << endl;
	tripleByReference(count);
	cout << "The value of count after tripleByReference is: " << count << endl;

}

int tripleByValue(int number)
{
	return number *= 3;
}
void tripleByReference(int &numberRef)
{
	numberRef *= 3;
}

//when the argument count is passed by value, a copy of the argument was made and used by the function. changes to the copy does not affect the original value of count
//when the argument was passed by reference, a change to the value of count in the function modifies the variable