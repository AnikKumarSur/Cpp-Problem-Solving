#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "Please enter your number : ";
	cin >> number;

	if (number % 5 == 0 && number % 11 == 0)
	{
		cout << number << " is divisible by 5 and 11.";
	}
	else {
		cout << number << " number is not divisible by 5 and 11.";
	}
	return 0;
}