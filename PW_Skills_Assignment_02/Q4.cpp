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
    int plant;
    cout<<"Enter how many flower u want to planted?"<<endl;
    cin >> plant;
    int count = 0;
        for (int i = 0; i < n && count<plant; i++)
        {
            if (arr[i] == 0)
            {
                int next = (i==n-1)?0:arr[i+1];
                int pre = (i==0)?0:arr[i-1];
                if (pre == 0 && next== 0)
                {
                    arr[i] = 1;
                    count++;
                }
            }
        }
    if (count == plant)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
