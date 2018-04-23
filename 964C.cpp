#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll MOD = 1e9+9;
#define scll(a) scanf("%I64d",&a)

ll PW(ll a, ll b)
{
    ll ans = 1;

    while(b){
        if(b&1){
            ans = ans*a%MOD;
        }
        b>>=1;
        a = a*a%MOD;
    }

    return ans;
}


int main()
{
    ll n,a,b,k,i;
    cin>>n>>a>>b>>k;
    string str;
    cin>>str;

    ll cur = 0;

    for(i = 0 ; i < k ; i++){
        if(str[i] == '+'){
            cur = (cur+PW(a,n-i) * PW(b,i)%MOD)%MOD;
        }
        else{
            cur = (cur-PW(a,n-i)*PW(b,i)%MOD+MOD)%MOD;
        }
    }

    ll tmp = PW(a,k*(MOD-2)%(MOD-1))*PW(b,k)%MOD;
    if(tmp == 1){
        cout<<cur*((n+1)/k)%MOD;
    }
    else{
        cout<<cur*PW(tmp - 1, MOD-2)%MOD*(PW(tmp,(n+1)/k)-1)%MOD;
    }

    return 0;
}
