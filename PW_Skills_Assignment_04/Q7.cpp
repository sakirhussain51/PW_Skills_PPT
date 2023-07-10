#include <bits/stdc++.h>

using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a = m;
        int b = n;
        for (auto i: ops){
            if (i[0] < a){
                a = i[0];
            }
            if (i[1] < b){
                b = i[1];
            } 
        }
        return (a * b);  
}
int main()
{

    cout <<"The number of maximum integers in the matrix after performing all the operations:" << endl;

    int n=3, m=3;

    vector<vector<int>> ops{{2,2},{3,3}};

    int ans= maxCount(m,n,ops);

    cout<<ans<<endl;
    return 0;
}