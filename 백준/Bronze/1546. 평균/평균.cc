#include <iostream>
using namespace std;


int main()
{
	int n = 0;
	int m = 0;
	int max = 0;
	double arr[1001];
	double avg = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		arr[i] = m;
		if (m > max)
		{
			max = m;
		}
		
	}
	

	for (int j = 0; j < n; j++)
	{
		arr[j] = arr[j] * 100 / max;
		
	}
	
	for (int k = 0; k < n; k++)
	{
		avg += arr[k];
	}
	avg = avg / n;
	cout.precision(10);
	cout << fixed;
	cout << avg;

	return 0;
}