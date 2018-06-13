//http://codeforces.com/contest/989/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int l,i,j;

    cin>>str;

    l = str.length();

    for(i = 0 ; i < l-2 ; i++){
        if(str[i] != '.' && str[i+1] != '.' && str[i+2] != '.'){
            if(str[i] != str[i+1] && str[i]!= str[i+2] && str[i+1] != str[i+2]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"No"<<endl;

    return 0;
}
