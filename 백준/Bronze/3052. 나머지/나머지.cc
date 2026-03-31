#include <iostream>
using namespace std;


int main()
{
	int arr[42] = { 0 };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		
		int k = num % 42;

		if (arr[k] == 0)
		{
			arr[k] = 1;
			count++;
		}
	}
	cout << count;
	return 0;
}