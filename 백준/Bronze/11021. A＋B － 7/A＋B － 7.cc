#include <iostream>
using namespace std;

int main()
{
    int user_num;
    cin >> user_num;
    for (int i = 1; i <= user_num; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }

    return 0;
}