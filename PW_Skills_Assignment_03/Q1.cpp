#include<bits/stdc++.h>

using namespace std;

int sum3_Closest(int arr[],int target,int n){

      int low,right;
        int closest=arr[0]+arr[1]+arr[2];
     //   int n =sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
           low=i+1;
             right = n-1;
            while(low<right){
                int cur = arr[i]+arr[low]+arr[right];
                if(cur==target){
                    low++;
                    right--;
                }
                if(abs(target-cur)<abs(target-closest)){
                    closest=cur;
                }
                if(cur<target)
                low++;
                if(cur>target)
                right--;
            }
        }
        return closest;
    }

int main(){

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
     int result = sum3_Closest(arr,target,n);
     cout<<result<<endl;
    return 0;
}