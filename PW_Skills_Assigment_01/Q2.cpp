#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;
      vector<int>v1;
    int items;
    for(int i=0;i<n;i++){
        cin>>items;
        v.push_back(items);

    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(v[i]!=k){
            int l = v[i];
            v1.push_back(l);
        }
    }
    for(auto x:v1){
        cout<<x<<" ";
    }cout<<endl;


    
    return 0;
}