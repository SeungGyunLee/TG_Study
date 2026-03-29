#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int arr[100];
	int n = 0;
	int m = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	for (int j = 0; j < m; j++)
	{
		int a, b = 0;
		cin >> a >> b;
		swap(arr[a-1], arr[b-1]);
	}

	for (int k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}

    return 0;

}