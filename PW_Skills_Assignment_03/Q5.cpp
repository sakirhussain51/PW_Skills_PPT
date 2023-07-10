#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter size of array?"<<endl;
    cin>>n;
    vector<int>v(n);
        vector<int>v1;
        cout<<"Enter element of the array?"<<endl;
    for(int i=0;i<n;i++)
    cin>>v[i];
    int digit=0;
    for(int i=0;i<n;i++){
    
       digit = digit*10+v[i];
    }
     v.clear();
     digit = digit+1;
     stringstream ss;
     ss<<digit;
     int j=0;
     string str = ss.str();
     cout<<"Ouput"<<endl;
     for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
     }
    cout<<endl;
    return 0;
}
