#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int flag=0;
  for(int i=0;i<n-1;i++){
   for(int j=i+1;j<n;j++)
    if(arr[i]==arr[j])
    {
        cout<<"true"<<endl;
        flag=1;
        break;
    }if(flag==1)
     break;
  }if(flag==0)
  cout<<"false"<<endl;
    return 0;
}