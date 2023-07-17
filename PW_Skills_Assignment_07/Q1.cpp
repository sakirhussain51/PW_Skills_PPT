#include<bits/stdc++.h>

using namespace std;

int main(){

     unordered_map<char,char>umap1,umap2;
     string str1,str2;
     cin>>str1>>str2;
     int flag=0;
     int len1=str1.length();
     int len2=str2.length();
     if(len1!=len2){
        cout<<"false"<<endl;
        flag=1;
     }else {
     for(int i=0;i<len1;i++){
        auto ch1=umap1.find(str1[i]);
        if(ch1!=umap1.end()){
         if(ch1->second!=str2[i]){
            cout<<"false"<<endl;
            flag=1;
            break;
         }  
        }else{
         umap1[str1[i]]=str2[i];
        }
     }
        for(int i=0;i<len2;i++){
        auto ch2=umap2.find(str2[i]);
        if(ch2!=umap2.end()){
         if(ch2->second!=str1[i]){
            cout<<"false"<<endl;
            flag=1;
            break;
         }  
        }else{
         umap2[str2[i]]=str1[i];
        }
     }
    }
    if(flag==0)
    cout<<"true"<<endl;
    return 0;
}
