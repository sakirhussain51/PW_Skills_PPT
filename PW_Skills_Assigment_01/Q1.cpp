#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target ;
    cin>>target;
    int idx1,idx2,flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
            {
                idx1=i;
                idx2=j;
                flag=1;
                break;
            }
        } if(flag==1)break;   
    }
    if(flag==1)
    cout<<idx1<<" "<<idx2<<endl;
    else
    cout<<"No exist"<<endl;

    return 0;
}