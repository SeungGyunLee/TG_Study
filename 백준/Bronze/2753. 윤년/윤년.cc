#include <iostream>
using namespace std;

int main()
{
    int year; 
    cin >> year;
    if (year >= 0 && year <= 4000)
    {
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    else
    {
        cout << "오류가 발생했습니다. 날짜 범위를 다시 확인해주세요.";
    }
    return 0;
}