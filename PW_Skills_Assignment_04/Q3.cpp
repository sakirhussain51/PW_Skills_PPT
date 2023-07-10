#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter size of 2D array N*M" << endl;

    int n, m;

    cin >> n >> m;
    int arr1[n][m];
    cout << "Enter elements of 2D array" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr1[i][j];
    }

    cout << "The transpose of a matrix is:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr1[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}