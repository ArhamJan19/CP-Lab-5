#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	do {
		cout << i << " ";
		i = i * 2;
	} while (i <= 1000);
	return 0;
}