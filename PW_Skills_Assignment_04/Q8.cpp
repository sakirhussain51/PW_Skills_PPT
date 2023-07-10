#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of 2*n array:" << endl;

    cin >> n;
    int n1 = 2*n;
    int arr1[n1];
    cout << "Enter "<<n1<<" element of  array:" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
     int k =n1/2;
     int j=k;
     cout<<"output:"<<endl;
    for (int i = 0; i < k && j<n1; i++)
    {
        cout<<arr1[i]<<" "<<arr1[j++]<<" ";
    }
    cout << endl;
    return 0;
}