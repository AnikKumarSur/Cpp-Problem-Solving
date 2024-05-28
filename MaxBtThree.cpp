#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout << "Please enter your first number : ";
	cin >> num1;
	cout << "Please enter your second number : ";
	cin >> num2;
	cout << "Please enter your Third number : ";
	cin >> num3;

	if (num1 >= num2 && num1 >= num3 )
	{
		cout << num1 << " is the biggest number among three.";
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		cout << num2 << " is the biggest number among three.";
	}
	else {
		cout << num3 << " is the biggest number among three.";
	}
	

	return 0;
}