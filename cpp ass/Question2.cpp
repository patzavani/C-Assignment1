/* Question 2. 
*  Name:     [Essesien Patrick Okon]
*  Reg. No.: [PDS/2013/5722]
*  Dept.:    [Mathematics]
* Write a program that reads in two integers and determines and prints if the first is a multiple of the second.
*/ 

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int firstnum, secondnum;
	
	cout << "Enter the two integers. \n";
	cin >> firstnum >> secondnum;
	
	if (firstnum % secondnum == 0)
	cout << "The first number is a multiple of the second. \n";
	else
	cout << "The first number is not a multiple of the second. \n";
	
	return 0;
}
