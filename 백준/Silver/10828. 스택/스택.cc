#define _CRT_SECURE_NO_WARNINGS   

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void push(vector<int> &a, int num)
{
    a.push_back(num);
}
void pop(vector<int> &a)
{
    if (a.empty() == true)
    {
        cout << "-1\n";
    }
    else
    {
        cout << a.back() << "\n";
        a.pop_back();
    }
}
void size(vector<int> &a)
{
    cout << a.size() << "\n";
}
void empty(vector<int> &a)
{
    if (a.empty() == true)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
}
void top(vector<int> &a)
{
    if (a.empty() == true)
    {
        cout << "-1\n";
    }
    else
    {
        cout << a.back() << "\n";
    }
}

int main(void)

{
    int count = 0;
    string option;
    int num;
    vector<int> stack;
    cin >> count;

    for (int i = 0;i < count; i++)
    {
        cin >> option;
        if (option == "push")
        {
            cin >> num;
            push(stack, num);
            continue;

        }
        else if (option == "pop")
        {
            pop(stack);
            continue;
        }
        else if (option == "size")
        {
            size(stack);
            continue;
        }
        else if (option == "empty")
        {
            empty(stack);
            continue;
        }
        else if (option == "top")
        {
            top(stack);
            continue;
        }

    }
    
    return 0;
}
