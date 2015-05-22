/* Question 1. 
*  Name:     [Essesien Patrick Okon]
*  Reg. No.: [PDS/2013/5722]
*  Dept.:    [Mathematics]
* Write a program that accepts two integers and determines if its odd or even.
*/ 

#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Input an integer: \n";
	cin >> num;
	
	if (num % 2 == 0)
	cout << "The integer is even. \n";
	if (num % 2 == 1)
	cout << "The integer is odd. \n";
	
	return 0;
}
