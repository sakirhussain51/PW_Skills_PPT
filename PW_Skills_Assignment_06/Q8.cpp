#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cout << "Enter size of N*M 2D array1?" << endl;
    cin >> n>>m;
    int arr1[n][m];
    cout << "Enter element of the 2D array1?" << endl;
    for (int i = 0; i < n; i++)
    {

      for(int j=0;j<m;j++)
        cin >> arr1[i][j];
    }

   int n1,m1;
    cout << "Enter size of N*M 2D array2?" << endl;
    cin >> n1>>m1;
    int arr2[n1][m1];
    cout << "Enter element of the 2D array2?" << endl;
    for (int i = 0; i < n1; i++)
    {

      for(int j=0;j<m1;j++)
        cin >> arr2[i][j];
    }

  int multi[n][m1];
    if(m==n1){

    for(int i=0;i<n;i++){

        for(int j=0;j<m1;j++){
          multi[i][j]=0;
          for(int k=0;k<m;k++){
            multi[i][j]+=arr1[i][k]*arr2[k][j];
          }
        }
    }
    }

    cout << " the result of mat1 x mat2 multiplication is:" << endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m1;j++){
           cout<<multi[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}