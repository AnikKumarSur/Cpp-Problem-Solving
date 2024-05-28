#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter the character : ";
	cin >> ch;
	if (ch >= 'A' && ch <='Z')
	{
		cout << ch <<" is the uppercase letter.";
	}
	else if (ch >= 'a' && ch <= 'b')
	{
		cout << ch << " is the lowercase letter. ";
	}
	else {
		cout << "This is not a letter.";
	}
	return 0;
		
}