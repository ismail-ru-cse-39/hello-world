//http://codeforces.com/contest/841/problem/B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define scll(a) scanf("%I64d",&a)

int main()
{
    ll n,i;

    scll(n);

    for(i = 0 ; i < n ; i++){
        ll a;
        scll(a);
        if(a&1){
            puts("First");
            return 0;
        }
    }

    puts("Second");

    return 0;
}
