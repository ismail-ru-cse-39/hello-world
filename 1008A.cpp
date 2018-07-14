//http://codeforces.com/contest/1008/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int l,i;

    cin>>str;

    for(i = 0 ; i < str.length() ; i++){
        if(str[i]!= 'a' && str[i] != 'e' && str[i] !=  'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'n'){
            if(str[i+1]!= 'a' && str[i+1] != 'e' && str[i+1] !=  'i' && str[i+1] != 'o' && str[i+1] != 'u'){
                //cout<<str[i]<<" "<<str[i+1]<<endl;
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
