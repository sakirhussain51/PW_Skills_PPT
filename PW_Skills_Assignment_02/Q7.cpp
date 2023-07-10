#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for incresing 
    int flag=0,flag1=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            flag=1;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])
        {
            flag1=1;
            break;
        }
    }
    if(flag==0 || flag1==0)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    
    return 0;
}