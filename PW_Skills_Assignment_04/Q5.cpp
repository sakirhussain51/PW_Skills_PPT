#include <bits/stdc++.h>

using namespace std;

int main()
{
      cout<<"Enter size of the integer:"<<endl;

    int n;
    cin >> n;
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        if (temp >= count)
            count++;
        temp = temp - count;
    }
        cout<<"the number of complete rows of the staircase you will build."<<endl;
    if (n == 1)
        cout << count << endl;
    else
        cout << count - 1 << endl;
    return 0;
}
