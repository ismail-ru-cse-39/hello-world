//http://codeforces.com/contest/977/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%d",&a)
#define SZ 100000+20

int main()
{
    ll n,k;

    cin>>n>>k;

    for(ll i = 0 ; i < k ; i++){
        if(n%10 == 0){
            n/=10;
        }
        else{
            n--;
        }
    }

    cout<<n<<endl;

    return 0;
}

