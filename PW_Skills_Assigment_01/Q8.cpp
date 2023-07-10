#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    vector<int> v;
    int i=arr[0];
    for (auto it : umap)
    {

        if (it.second >= 2)
            v.push_back(it.first);
        if(it.first!=i)
        v.push_back(i);

        i++;
    }
    for (auto x : v)
        cout<<x<<" ";
    cout << endl;
    return 0;
}