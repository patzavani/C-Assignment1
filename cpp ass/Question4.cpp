/* Question 4. 
*  Name:     [Essesien Patrick Okon]
*  Reg. No.: [PDS/2013/5722]
*  Dept.:    [Mathematics]
* Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each.
*/ 

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fivedigit;
	int num1, num2, num3, num4, num5;
	
	cout << "enter the five digit integer: ";
	cin >> fivedigit;
	
	if(fivedigit < 10000)
	{
		cout << "...... ";
	}
	
	if(fivedigit > 9999)
	{
		cout << "...... ";
	}
	
	num1 = fivedigit/10000;
	num2 = (fivedigit/1000)%10;
	num3 = (fivedigit/100)%10;
	num4 = (fivedigit/10)%10;
	num5 = fivedigit%10;
	
	cout << num1;
	cout << " " << num2;
	cout << " " << num3;
	cout << " " << num4;
	cout << " " << num5;
	
	return 0;
}
