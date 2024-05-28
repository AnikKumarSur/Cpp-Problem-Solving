#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double r,d, a, c, pi = 3.1416;
	cin >> r;

	cout << "Diameter of a circle : ";
	d = r* 2;
	cout << d << endl;

	cout << "circumference of a circle : ";
	c = 2 * pi * r;
	cout << c << endl;

	cout << "Area of a circle : ";
	a = (pi * r * r);
	cout << a;

	return 0;
}