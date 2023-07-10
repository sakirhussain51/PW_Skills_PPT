#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter size of array?" << endl;
    cin >> n;
    int arr1[n];
    cout << "Enter element of the array1?" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter same length of element of the array1 into array2 ?" << endl;

    int arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    sort(arr1,arr1+n);
    sort(arr2,arr2+n,greater<int>());

    int minSum=0;

    for(int i=0;i<n;i++){
        minSum=minSum+(arr1[i]*arr2[i]);
    }
    cout<<"Minimun_Sum:"<<endl;
    cout <<minSum<< endl;
    return 0;
}