#include<bits/stdc++.h>

using namespace std;

    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int idx = size-1;
        while(idx >0) {
            if(nums[idx-1] < nums[idx]) {

                int jdx = idx+1;
                while(jdx < size && nums[idx-1]< nums[jdx]) 
                    jdx++;
                swap(nums[idx-1], nums[jdx-1]);
                break;
            }
            --idx;
        }
        reverse(nums.begin()+idx,nums.end());
        return;
    }
int  main(){

     int n;
     cout<<"Enter size of the array?"<<endl;
     cin>>n;
     vector<int>v(n);
     cout<<"Enter element of the array?"<<endl;
     for(int i=0;i<n;i++)
     cin>>v[i];

     nextPermutation(v);
     for(auto x:v)
     cout<<x<<" ";
     cout<<endl;
     return 0;
}