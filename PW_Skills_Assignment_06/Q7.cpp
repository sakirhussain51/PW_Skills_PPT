
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralPrint(vector<vector<int>> &v2)
{

    int n = v2.size();
    int m = v2[0].size();

    int left = 0;
    int right = m - 1;
    int top = 0;
    int button = n - 1;

    vector<int> ans;

    while (left <= right && top <= button)
    {

        for (int i = left; i <= right; i++)
        {
            ans.push_back(v2[top][i]);
        }
        top++;

        for (int i = top; i <= button; i++)
        {
            ans.push_back(v2[i][right]);
        }
        right--;
        if (top <= button)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(v2[button][i]);
            }
            button--;
        }

        if (left <= right)
        {
            for (int i = button; i >= top; i--)
            {
                ans.push_back(v2[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{

    cout << "Enter the size of N*M 2D array:" << endl;
    int n1, m1;
    cin >> n1 >> m1;

    vector<vector<int>> v2;

    for (int i = 0; i < n1; i++)
    {
        vector<int> v;
        for (int j = 0; j < m1; j++)
        {
            int items;
            cin >> items;
            v.push_back(items);
        }
        v2.push_back(v);
    }
    
    vector<int> v3(spiralPrint(v2));

    cout << "A generate an n x n matrix filled with elements from 1 to n2 in spiral order:" << endl;

    for (auto x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}