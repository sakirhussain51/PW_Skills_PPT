#include <bits/stdc++.h>

using namespace std;


int main()
{

    cout << "Enter size of array1" << endl;

    int n1;
    cin >> n1;
        
        unordered_set<int>set1(n1);

         unordered_map<int,int>umap;

    cout << "Enter elements of array1" << endl;
    for (int i = 0; i < n1; i++)
    {
        int item;
        cin>>item;
        set1.insert(item);

    }

    cout << "Enter size of array2" << endl;

    int n2;

    cin >> n2;
            unordered_set<int>set2(n2);

    cout << "Enter elements of array2" << endl;
    for (int i = 0; i < n2; i++)
    {
        int item;
        cin >>item;
        set2.insert(item);
    }

    for(auto x:set1){

        umap[x]++;
    }

     for(auto x:set2){

        umap[x]++;
    }

   cout<<"All distinct integers in nums1 which are not present in nums2. & nums2 not present in nums1"<<endl;
    for(auto x:umap){

        if(x.second==1)
        cout<<x.first<<" ";
    }
    cout<<endl;

    return 0;
}