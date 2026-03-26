#include <iostream>
using namespace std;

int main(void)

{
    int count;
    int max = -10000000;
    int min = 1000000;
    cin >> count;
    
    for (int i = 0;i < count; i++)
    {
        int arg;
        cin >> arg;
        if (max < arg)
        {
            max = arg;
        }
        if (min > arg)
        {
            min = arg;
        }
    }
    cout << min << " " << max;
    return 0;
}
