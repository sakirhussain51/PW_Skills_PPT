#include <bits/stdc++.h>

using namespace std;

int main()
{

    cout << "Enter the Strig?" << endl;
    string str;
    cin >> str;

    int len = str.length();
    cout << "Enter the  string2" << endl;
    string str1;
    cin >> str1;
    int str1_len = str1.length();

    
    stack<char>s,s1;

    for(int i=0;i<len;i++){

        if(str[i]=='#')
        s.pop();
        else
        s.push(str[i]);
    }

    for(int i=0;i<str1_len;i++){
        if(str[i]=='#')
        s1.pop();
        else
        s1.push(str[i]);
    }



    cout << "Result after some backspacing of character:" << endl;

    if (s!=s1)
        cout << "false" << endl;
    else
    {
        cout << "true";
    }

    cout << endl;

    return 0;
}
