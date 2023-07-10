#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "Enter size of the array?" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter element of the array?" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter lower range?" << endl;
    int l;
    cin >> l;
    cout << "Enter upper range?" << endl;
    int u;
    cin >> u;
    int j=l;
    cout<<"Output"<<endl;
    for (int i = 0; i < n; i++){
         if(arr[i]!=j){
         cout<<j<<" "<<(arr[i]-1)<<" "<<endl;
         j=arr[i];
         }
         j++;
    }
    if(j<u)
    cout<<j<<" "<<u<<endl;

        return 0;
}