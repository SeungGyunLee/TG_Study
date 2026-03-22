#include <iostream>
using namespace std;

int main()
{
    int num_a; 
    int num_b;
    cin >> num_a >> num_b;
    if ((num_a >= 1) && (num_b <= 10000))
    {
        cout << num_a + num_b << "\n";
        cout << num_a - num_b << "\n";
        cout << num_a * num_b << "\n";
        cout << num_a / num_b << "\n";
        cout << num_a % num_b << "\n";
    }
    else
    {
        cout << "잘못된 입력입니다.";
    }
    return 0;
}