#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr,arr+n);
    int ans = (arr[n-1])*(arr[n-2])*(arr[n-3]);
    int ans1 = arr[0]*arr[1]*arr[n-1];
    cout<<max(ans,ans1)<<endl;
    return 0;
}