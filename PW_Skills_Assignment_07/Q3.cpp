
#include<bits/stdc++.h>

using namespace std;

int main(){

    string str,str1;
    cin>>str>>str1;
    int n=str.length();
    int n1=str1.length();
    int num=0;
    for(int i=0;i<n;i++){
        if(str[i]>='0' && str[i] <='9'){
            num=num*10+str[i]-'0';
        }
    }
    int num2=0;
    for(int i=0;i<n1;i++){
    if(str1[i]>='0' && str1[i]<='9'){
            num2=num2*10+str1[i]-'0';
        }
    }
    long long int sum=num+num2;
    cout<<sum<<endl;
return 0;
}
