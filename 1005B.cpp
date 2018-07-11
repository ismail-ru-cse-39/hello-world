//http://codeforces.com/contest/1005/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    string str1,str2;

    cin>>str1;
    cin>>str2;

    i = str1.length();
    j = str2.length();

    while(str1[i-1] == str2[j-1] && i >0  && j > 0){
        i--;
        j--;
    }

    cout<<i+j<<endl;

    return 0;
}
