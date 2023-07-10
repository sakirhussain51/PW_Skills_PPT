#include <bits/stdc++.h>

using namespace std;

void commonElement(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){

    int i=0;
    int j=0;
    int k=0;
    //cout<<arr1[i]<<arr2[j]<<arr3[k]<<endl;

    while(i<n1 && j<n2 && k<n3){

        int tempmin= min(arr1[i],arr2[j]);
        int mini = min(tempmin,arr3[k]);

        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }

        if(arr1[i]==mini)
        i++;
        if(arr2[j]==mini)
        j++;
        if(arr3[k]==mini)
        k++;
    }
    cout<<endl;

}

int main()
{

    cout << "Enter size of array1" << endl;

    int n1;

    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array1" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of array2" << endl;

    int n2;

    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of array2" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Enter size of array3" << endl;

    int n3;

    cin >> n3;
    int arr3[n3];

    cout << "Enter elements of array3" << endl;
    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }

     commonElement(arr1,arr2,arr3,n1,n2,n3);

    return 0;
}