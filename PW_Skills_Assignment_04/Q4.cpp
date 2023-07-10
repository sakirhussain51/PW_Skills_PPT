#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1;
    cout << "Enter size of array1" << endl;

    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array1" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    sort(arr1, arr1 + n1);
    int max = 0, ans = 0;
    for (int i = 0; i < n1; i++)
    {
        ans++;
        if (ans % 2 != 0)
            max = max + arr1[i];
    }
    cout << max << endl;

    return 0;
}