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

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr1[i] * arr1[i];
    }
    sort(arr1, arr1 + n1);
    
    cout<<"array of the squares of each number sorted in non-decreasing order."<<endl;

    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    cout << endl;
    return 0;
}