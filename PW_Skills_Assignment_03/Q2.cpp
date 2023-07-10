#include<bits/stdc++.h>

using namespace std;

void sum4_Target(int nums[],int target,int n){

       sort(nums,nums+n);
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int h=0;h<n;h++){
        for (int i = h+1; i < n-1; i++){
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
             long long int sum = nums[h]+nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[h],nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        for (int i = 0; i < output.size(); i++) {
        for (int j = 0; j < output[i].size(); j++)
            cout << output[i][j] << " ";
        cout << endl;
    }
 }
int  main(){

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
                sum4_Target(arr,target,n);
    return 0;
}