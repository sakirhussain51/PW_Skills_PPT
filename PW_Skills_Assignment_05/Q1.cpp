#include<bits/stdc++.h>

using namespace std;

int main(){
 
   cout<<"Enter the size of original array:"<<endl;
    int n;
    cin>>n;
    int arr[n];

    cout<<"Enter the element of original array:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the size of N*M 2d array:"<<endl;

    int n1,m1;
    cin>>n1>>m1;
    int k=0;
    int arr1[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
         arr1[i][j]=arr[k++];
        }
    }
    cout<<"Output of x*n 2D array constructed according to the after procedure:"<<endl;
    
       for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
         cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }



    return 0;
}