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

    int n2;
    cout << "Enter size of array2" << endl;

    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of array2" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Enter the value of d:" << endl;

    int d;
    cin >> d;
    int count = 0;
    for (int i = 0; i < n1; i++)
    {
        int flag=1;
        for (int j = 0; j < n2; j++)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
                flag=0;
        }
        if(flag==1)
        count+=1;
    }
    cout << "the distance value between the two arrays." << endl;

    cout << count << endl;
    return 0;
}