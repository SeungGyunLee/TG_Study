#include <iostream>
using namespace std;

int main()
{
    int num_a; 
    int num_b;
    cin >> num_a >> num_b;
    if ((num_a >= -10000) && (num_b <= 10000))
    {
        if ((num_a - num_b) > 0)
        {
            cout << ">";
        }
        else if ((num_a - num_b) < 0)
        {
            cout << "<";
        }
        else
        {
            cout << "==";
        }
    }
    else
    {
        cout << "오류가 발생했습니다. 범위를 다시 확인해주세요.";
    }
    return 0;
}