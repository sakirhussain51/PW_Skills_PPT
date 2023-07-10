#include<bits/stdc++.h>

using namespace std;

int  main(){

     int n;
     cout<<"Enter size of the array?"<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter element of the array?"<<endl;
     for(int i=0;i<n;i++)
     cin>>arr[i];
     cout<<"Enter Target?"<<endl;
     int ans=0;
     for(int i=0;i<n;i++){
      ans=ans^arr[i];
     }
     cout<<ans<<endl;
     
    return 0;
}