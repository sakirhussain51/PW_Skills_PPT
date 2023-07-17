#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter the Strig?" << endl;
    string str;
    cin >> str;

    int len = str.length();
    cout << "Enter the goal string" << endl;
    string goal;
    cin >> goal;
    int goal_len = str.length();

    string concetinate = str + str;

    cout << "Result after some shift of character:" << endl;

    if (goal_len != len)
        cout << "false" << endl;
    else if (concetinate.find(goal) != string::npos)
        cout << "true";
    else
    {
        cout << "false";
    }

    cout << endl;

    return 0;
}
