#include<bits/stdc++.h>

using namespace std;

int search_Target(vector<vector<int>>a,int key)
{
    int n=a.size();
    int m = a[0].size();
    int low=0;
    int high=(n*m)-1;
        int mid=(low+high)/2;
   while(low<=high)
   {
   
     int element = a[mid/m][mid%m];

     if(element==key)
     return 1;                              //key not found

     if(element<key)
     {
         low=mid+1;
     }
     if(element>key)
        high=mid-1;

      mid=(low+high)/2;

 }
 return 0;

}

int  main(){

     int n,m;
     cout<<"Enter size of the N*M array?"<<endl;
     cin>>n>>m;
     int arr[n][m];
     cout<<"Enter element of the 2D array?"<<endl;
     vector<int>v;
     for(int i=0;i<n*m;i++){
     int items;
     cin>>items;
     v.push_back(items);
     }
     vector<vector<int>>v2;
     //for(auto x:v){
        v2.push_back(v);
     //}

     cout<<"Enter Target?"<<endl;
     int target;
     cin>>target;

                int result=search_Target(v2,target);
                if(result==1)