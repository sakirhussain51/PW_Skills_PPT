
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin>>str;
    int n=str.length();
    int i=0;
    int j=n-1;
    int flag=0;
    int count=0;
    while(i<=j){
        char f=str[i];
        char l =str[j];
        if(f==l || (f=='9' && l=='6') || (f=='6' && l=='9')){
           // count++;
        }else{
            cout<<"false"<<endl;
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0)
        cout<<"True"<<endl;
return 0;
}
