#include <bits/stdc++.h>

using namespace std;

int binary_Search(int arr[],int low,int high){

	if (high < low)
		return arr[0];


	if (high == low)
		return arr[low];

	int mid = low + (high - low) / 2; 

	if (mid < high && arr[mid + 1] < arr[mid])
		return arr[mid + 1];

	if (mid > low && arr[mid] < arr[mid - 1])
		return arr[mid];

	if (arr[high] > arr[mid])
		return binary_Search(arr, low, mid - 1);
	return binary_Search(arr, mid + 1, high);
}
int main()
{
    int n1;
    cout << "Enter size of array" << endl;

    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array" << endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    
    cout<<"The minimum element of this array."<<endl;

     int ans = binary_Search(arr1,0,n1-1);
    cout <<ans<<endl;
    return 0;
}