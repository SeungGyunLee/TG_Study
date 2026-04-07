#define _CRT_SECURE_NO_WARNINGS   

#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class User
{
public:
    string user_name;
    int user_age;
    int user_index;

private:

};

bool compare(const User& a,const User& b)
{

    if (a.user_age != b.user_age)
    {
        return a.user_age < b.user_age;
    }

    a.user_index < b.user_index;
}

int main(void)

{
    int repeat = 0;
    cin >> repeat;
    User user;
    vector<User> paper;
    for (int i = 0; i < repeat; i++)
    {
        user.user_index = i + 1;
        cin >> user.user_age >> user.user_name;
        paper.push_back(user);
    }

    stable_sort(paper.begin(), paper.end(), compare);
    
    for (int i = 0; i < paper.size(); i++)
    {
        cout << paper[i].user_age << " " << paper[i].user_name + "\n";
    }
    


    return 0;
}
