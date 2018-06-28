//https://codeforces.com/contest/991/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;

    cin>>a>>b>>c>>n;

    int tmp = a+b-c;


    if(tmp >= n || c > b || c > a){
        cout<<-1<<endl;
        return 0;
    }

    cout<<n-tmp<<endl;

    return 0;
}

