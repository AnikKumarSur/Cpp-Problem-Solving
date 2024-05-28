#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c >b) && (b + c > a))
	{
		cout<<a <<"," << b <<"," << c << " is valid.";
	}
	else {
		cout << a <<"," << b <<"," << c << " is invalid.";
	}

}