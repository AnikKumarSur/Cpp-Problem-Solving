#include<iostream>
using namespace std;
int main()
{
	int ar[100],n;
	cin >> n;


	for (int i = 1; i <=n; i++)
	{
		cin >> ar[i];
	}
	
	
	for (int i = 1; i <= n; i++)
	{
		if (ar[0] < ar[i])
		{
			ar[0] = ar[i];
		}
		
		
	}
	cout << " Maximum Number" << ar[0] <<endl;
	

	return 0;
}