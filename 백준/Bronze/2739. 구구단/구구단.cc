#include <iostream>
using namespace std;

int main()
{
    int user_num;
    cin >> user_num;
    for (int i = 1; i < 10; i++)
    {
        cout << user_num << " * " << i << " = " << user_num * i << "\n";
    }

    return 0;
}