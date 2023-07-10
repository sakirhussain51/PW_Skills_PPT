#include <bits/stdc++.h>

using namespace std;

 int smallestRangeI(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int diff;
        
        if(nums[nums.size()-1]-k>=nums[0]+k){
            diff=(nums[nums.size()-1]-k)-(nums[0]+k);
        }
        else{
            int fl=nums[nums.size()-1]-nums[0]+k;
            diff=nums[nums.size()-1]-fl-nums[0]+k;
        }
        return diff;
    }

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter element of the array"<<endl;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int k;
    
    cout<<"Enter of k value"<<endl;
    cin>>k;
    int result = smallestRangeI(nums,k);
    cout<<result<<endl;
    return 0;
}