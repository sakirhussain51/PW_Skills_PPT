#include <bits/stdc++.h>

using namespace std;

void sorted_Merge(int arr1[], int arr2[], int n, int m)
{

    int i = 0;
    int merge[n + m];
    int j = 0, k = 0;
    while (i < n && j < m)
    {

        if (arr1[i] < arr2[j])
        {
            merge[k++] = arr1[i++];
        }
        else
        {

            merge[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        merge[k++] = arr1[i++];
    }
    while (j < m)
    {
        merge[k++] = arr2[j++];
    }

    int len = n + m;
    for (int m = 0; m < len; m++)
        cout << merge[m] << " ";
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter size of first array" << endl;
    cin >> n;
    int nums[n];
    cout << "Enter element of the first array" << endl;
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter size of second array" << endl;
    int m;
    cin >> m;
    cout << "Enter element of the second array" << endl;
    int nums2[m];
    for (int i = 0; i < m; i++)
        cin >> nums2[i];
    cout<<"Merge of the sorted array"<<endl;
    sorted_Merge(nums, nums2, n, m);
    return 0;
}