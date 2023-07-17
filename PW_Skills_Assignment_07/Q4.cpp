
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cout<<"Enter the Strig"<<endl;
    getline(cin,str);

    int len = str.length();
    int left =0;
    int right=0;
  
     while(left<len)
     {
        while((str[right]!=' ') && right<len){
            right++;
        }

           reverse(str.begin()+left,str.begin()+right);
            left=right+1;
            right=left;

     }
         cout<<"Reverse word of string:"<<endl;
         cout<<str<<endl;
    
return 0;
}
