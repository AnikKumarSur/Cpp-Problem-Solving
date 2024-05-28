#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int year,days,week,day;
	cin >> days;
	cout << "Convert days into years : ";
	year = (days / 365);
	week = ((days % 365) % 30) / 7;
	day =( (days % 365) % 30) % 7;
	
	cout << year <<"year,"<<week<<"week,"<<day<<"days,";

	return 0;
	
}