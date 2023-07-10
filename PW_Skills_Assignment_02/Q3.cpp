#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
     map<int,int>umap;
    for(int i=0;i<n;i++)
    umap[arr[i]]++;
    int ans=0;
    for(auto it:umap){

        if(umap.find(it.first-1)!=umap.end()){
            ans=max(ans,it.second+umap[it.first-1]);
        }
    }

    cout<<ans<<endl;
    

    return 0;
}