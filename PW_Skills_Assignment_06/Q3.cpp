#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter size of the array?" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of the array?" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max = INT_MIN;
    int idx = 0; // find max
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            idx = i;
        }
    }
    int flag = 0;
    int flag1 = 0;

    if (max == arr[n-1]|| max==arr[0])
        flag = 1;
    else
    {
        for (int i = 0; i < idx - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                flag = 1;
                break;
            }
        }

        for (int i = idx; i < n - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
            {
                flag1 = 1;
                break;
            }
        }
    }
    cout << "Output" << endl;

    if (flag == 0 && flag1 == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}