//http://codeforces.com/contest/975/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define SZ 200000+20
#define scll(a) scanf("%I64d",&a)

ll n,q;
ll arr[SZ];

int main()
{

    scll(n);
    scll(q);
    scll(arr[0]);

    for(ll i = 1 ; i < n ; i++){
        scll(arr[i]);

        arr[i] += arr[i-1];
    }

    ll m = 0,ans = 0;

    while(q--){
        ll tmp;
        scll(tmp);

        m += tmp;
        ans = upper_bound(arr,arr+n,m)-arr;
       // cout<<ans<<endl;

        if(ans == n){
            m = 0;
            ans = 0;
        }

        printf("%I64d\n",n-ans);
    }

    return 0;
}
