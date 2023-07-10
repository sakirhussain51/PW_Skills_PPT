#include <bits/stdc++.h>

using namespace std;

vector<int> findOriginalArray(vector<int> &changed)
{
    int n = changed.size();
    if (n & 1)
        return {};
    vector<int> ans;
    map<int, int> mp;
    sort(changed.begin(), changed.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (mp.find(changed[i] * 2) != mp.end())
        {
            if (mp[changed[i] * 2] > 0)
            {
                mp[changed[i] * 2]--;
            }
            ans.push_back(changed[i]);
            if (mp[changed[i] * 2] == 0)
            {
                mp.erase(changed[i] * 2);
            }
        }
        else
        {
            mp[changed[i]]++;
        }
    }
    for (auto val : mp)
    {
        if (val.second != 0)
            return {};
    }
    return ans;
}

int main()
{
    int n1;
    cout << "Enter size of array" << endl;

    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of array" << endl;

    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        int items;
        cin >> items;
        v.push_back(items);
    }

    cout << "The elements in original will be any order." << endl;

    vector<int> v2(findOriginalArray(v));

    for (auto x : v2)
        cout << x << " ";

    cout << endl;

    return 0;
}