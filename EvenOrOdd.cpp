#include<iostream>
using namespace std;
int main()
{
	int arr[100], n, even = 0, odd =0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		
		
	}
	cout << "Total even Number : " << even << endl;
	cout << "Total odd Number : " << odd << endl;

	return 0;
}