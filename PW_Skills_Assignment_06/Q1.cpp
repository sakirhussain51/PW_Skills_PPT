#include<bits/stdc++.h>

using namespace std;

 vector<int> diString(string s) {

        vector<int>v;
        int ln=s.length();
        int j=0;
        int k=ln;
        for(int i=0;i<ln;i++){
            
            if(s[i]=='I')
            v.push_back(j++);

            if(s[i]=='D')
            v.push_back(k--);
        }
         int tempSize = v.size()-1;
        if(s[ln-1]=='D')
        v.push_back(v[tempSize]-1);
        else
        v.push_back(v[tempSize]+1);

        return v;
 }

int main(){

    cout<<"Enter the String in Capital Latter:"<<endl;

    string str;
    cin>>str;

    vector<int>v;
    v =diString(str);

    for(auto x:v)
    cout<<x<<" ";

    cout<<endl;

    return 0;
}