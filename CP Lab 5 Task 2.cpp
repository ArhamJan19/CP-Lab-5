#include<iostream>
using namespace std;
int main()
{
	int factorial = 1;
	int i, increment;
	cout << "which number do you want the factorial of : ";
	cin >> i;
	increment = i;
	do {
		factorial *= increment;
		increment--;
	} while (increment > 0);
	cout << "The Factorial of " << i << " is : " << factorial;
}