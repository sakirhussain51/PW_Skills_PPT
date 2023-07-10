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

    unordered_map<int, int> umap;
    umap.insert({0, -1});
    int sum = 0; // find max
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            sum += -1;
        }
        if (arr[i] == 1)
        {
            sum += 1;
        }

        if (umap.find(sum) != umap.end())
        {
            int len = i - umap[sum];
            if (ans < len)
                ans = len;
        }
        else
            {
                umap.insert({sum, i});
            }

    }

        cout <<ans<< endl;

    return 0;
}