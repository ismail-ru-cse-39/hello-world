//http://codeforces.com/contest/959/problem/B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define SZ 100000+5
#define scll(a) scanf("%I64d",&a)

map<string,ll>mpstrll;
ll arr[SZ],temp[SZ],mn[SZ],n,k,m;

void take_input()
{
    scll(n);
    scll(k);
    scll(m);

    for(ll i = 1 ; i <= n ; i++)
    {
        string str;
        cin>>str;
        mpstrll[str] = i;
    }

    for(ll i = 1 ; i <= n ; i++)
    {
        scll(arr[i]);
        mn[i] = INT_MAX;
    }
    return;
}

void solution()
{
    for(ll i = 1 ; i <= k; i++)
    {
        ll x;
        scll(x);

        while(x--)
        {
            ll tmp;
            scll(tmp);
            temp[tmp] = i;
            mn[i] = min(mn[i],arr[tmp]);
        }
    }

    ll res = 0;

    string str;

    for(ll i = 1 ; i <= m ; i++)
    {
       cin>>str;
        res += mn[temp[mpstrll[str]]];
    }

    cout<<res<<endl;

    return;
}


int main()
{
    take_input();
    solution();

    return 0;
}

