#include<iostream>
using namespace std;
int main()
{
	double ban, eng, math, sci, ict;
	cout << "Please enter your Bangla marks : ";
	cin >> ban;
	cout << "Please enter your English marks : ";
	cin >> eng;
	cout << "Please enter your Mathmatics marks : ";
	cin >> math;
	cout << "Please enter your Science marks : ";
	cin >> sci;
	cout << "Please enter your ict marks : ";
	cin >> ict;
	cout << "Total Marks : ";
	double total = (ban + eng + math + sci + ict);
	cout << total << endl;
	cout << "Average marks : ";
	double avg = (total / 5);
	cout << avg << endl;
	cout << "Parcentage of every subject : ";
	double percentage = (total/500)*100;
	cout << percentage << endl;


	return 0;

}