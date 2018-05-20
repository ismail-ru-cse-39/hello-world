//http://codeforces.com/contest/979/problem/B

#include <bits/stdc++.h>
using namespace std;
int a[256],b[256],c[256],n,ma,mb,mc;
string str1,str2,str3;

int main()
{
    cin>>n>>str1>>str2>>str3;

    for(char x: str1){
        ma = max(ma, ++a[x]);
    }
    for(char x: str2){
        mb = max(mb, ++b[x]);
    }
    for(char x : str3){
        mc = max(mc, ++c[x]);
    }

    if(n == 1 && ma == (int)str1.length()){
        str1.pop_back();
    }
    if(n == 1 && mb == (int)str2.length()){
        str2.pop_back();
    }
    if(n == 1 && mc == (int)str3.length()){
        str3.pop_back();
    }
    ma = min(ma+n, (int)str1.length());
    mb = min(mb+n, (int)str2.length());
    mc = min(mc+n, (int)str3.length());

    if(ma > mb && ma>mc){
        cout<<"Kuro"<<endl;
        return 0;
    }

    if(mb > ma && mb > mc){
        cout<<"Shiro"<<endl;
        return 0;
    }
    if(mc > ma && mc > mb){
        cout<<"Katie"<<endl;
        return 0;
    }

    cout<<"Draw"<<endl;

    return 0;
}

