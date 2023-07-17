
#include<bits/stdc++.h>

using namespace std;

int main(){

     cout<<"Enter the Strig?"<<endl;
    string str;
    cin>>str;
  
    int len = str.length();
    cout<<"Enter the integer K"<<endl;
    int k;
    cin>>k;
   // int k;
    int left =0;
    int right=1;
    if(len<k){
        reverse(str.begin()+left,str.begin()+len-1);
    }
    else{
     while(left<len)
     {
        while((right!=k) && right<len){
            right++;
        }
           reverse(str.begin()+left,str.begin()+right);

         if(left<len && right<len){
            left=right+k;
            k=left+k;
            right=left;
        }
     }
    }
         cout<<"Reverse character of kth length:"<<endl;
         cout<<str<<endl;
    
return 0;
}
