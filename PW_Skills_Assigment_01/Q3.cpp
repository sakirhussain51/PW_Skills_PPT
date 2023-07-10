#include<bits/stdc++.h>

using namespace std;
int binary_Search(int arr[],int n,int k){

    int low =0;
    int high = n-1;
    int mid = (low+high)/2;

    while(low<=high){

        if(arr[mid]==k || arr[low]==k || arr[high]==k){
            if(arr[mid==k])
            return mid;
            if(arr[low]==k)
            return low;
            if(arr[high]==k)
            return high;
        }
        if(arr[mid]>k)
        high = mid-1;
        if(arr[mid]<k)
        low= mid+1;

        mid = (low+high)/2;
    }

    return -1;


}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int result = binary_Search(arr,n,target);
    if(result>=0)
    cout<<result<<endl;
    else
    cout<<"No exist"<<endl;
    return 0;
}