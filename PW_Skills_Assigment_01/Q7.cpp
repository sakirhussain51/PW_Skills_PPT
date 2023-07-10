#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0;
    int j = n - 1;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
        else
            v.push_back(arr[i]);
    }
    for (int i = 0; i < count; i++)
        v.push_back(0);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}