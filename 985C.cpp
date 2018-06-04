//http://codeforces.com/contest/985/problem/C

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define scll(a) scanf("%I64d",&a)

ll n,k,i,j,l;

vector<ll>vll;

void take_input()
{
    cin>>n>>k>>l;

    ll m = n*k;

    for(i = 0 ; i < m ; i++){
        ll tmp;
        scll(tmp);
        vll.push_back(tmp);

    }


}

void solution()
{
    sort(vll.begin(),vll.end());

    int rg = int(upper_bound(vll.begin(),vll.end(),vll[0]+l)- vll.begin());

    if(rg < n){
        cout<<"0"<<endl;
        return;
    }

    ll ans = 0;

    int u = 0;

    for(i = 0 ; i < n ; i++){
        ans += vll[u++];

        for(j = 0; j < k-1; j++){
            if((rg-u) > (n-i-1)){
                u++;
            }
            else{
                break;
            }
        }
    }

    cout<<ans<<endl;

    return;
}

int main()
{
    take_input();
    solution();

    return 0;
}
