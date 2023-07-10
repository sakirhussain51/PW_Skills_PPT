#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1;
    cout << "Enter size of array1" << endl;

    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of array" << endl;

    unordered_map<int,int>umap;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        umap[arr1[i]]++;
    }
    
    cout<<"An array of all the integers that appears twice."<<endl;

    for (auto it:umap){
       if(it.second==2)
        cout << it.first << " ";
}
    cout << endl;
    return 0;
}