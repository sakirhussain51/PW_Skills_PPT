#include<bits/stdc++.h>

using namespace std;

int search_Target(int a[],int n,int key)
{
    int low=0;
    int high=n-1;

   while(low<=high)
   {
     int mid=(low+high)/2;

     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return low;                //key not found
 }



int  main(){

     int n;
     cout<<"Enter size of the array?"<<endl;
     cin>>n;
     int arr[n];
     cout<<"Enter element of the array?"<<endl;
     for(int i=0;i<n;i++)
     cin>>arr[i];
    cout<<"Enter Target?"<<endl;
     int target;
     cin>>target;
                int result=search_Target(arr,n,target);
                
                cout<<"index:"<<result<<endl;
    return 0;
}