#include <iostream>
#include <cstring>
using namespace std;

void search(char arr[], int n, int key)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
			count++;
	}
	cout << count << " ";
}
int main()
{
	char arr[101];
	cin >> arr;
	int len = strlen(arr);
	for (char j = 'a'; j <= 'z'; j++)
	{
		search(arr, len, j);
	}
	return 0;
}