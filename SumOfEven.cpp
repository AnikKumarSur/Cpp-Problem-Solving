#include<iostream>
using namespace std;
int main()
{
	int numbers,sum=0;
	cin >> numbers;
	for (int i = 0; i <= numbers; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
			cout << sum << endl;
		}
		
		
	}
	return 0;
}