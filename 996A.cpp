//https://codeforces.com/contest/996/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    ll cnt = 0;

    cin>>n;

    while(n>0){
        cnt+= (n/100);
        n %= 100;

        cnt+= (n/20);
        n %= 20;

        cnt+= (n/10);
        n %= 10;

        cnt += (n/5);
        n %= 5;

        cnt += (n/1);
        n %= 1;
    }

    cout<<cnt<<endl;

    return 0;
}
