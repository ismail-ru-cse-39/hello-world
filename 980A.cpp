//http://codeforces.com/contest/980/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n,i;
    cin>>str;
    n = str.length();
    int cntpearl = 0,cntlink = 0;

    for(i = 0 ; i < n ; i++){
        if(str[i] == 'o'){
            cntpearl++;
        }
        else{
            cntlink++;
        }
    }
    if(cntpearl == 1 && (cntlink%2)==0){
        cout<<"YES"<<endl;
        return 0;
    }
    if(cntpearl == n || (cntlink%cntpearl) == 0){
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;

}
