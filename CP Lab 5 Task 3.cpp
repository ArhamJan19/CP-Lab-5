#include<iostream> 
#include<string> 
using namespace std;
int main()
{
	int Decimal, Remainder;
	string Octal = " ";
	cout << "Enter Decimal Value you want to convert into Octal : ";
	cin >> Decimal;
	do
	{
		Remainder = Decimal % 8;
		Octal = to_string(Remainder) + Octal;
		Decimal = Decimal / 8;
	} while (Decimal != 0);
	cout << "The octal value is : " << Octal << endl;
	return 0;
}