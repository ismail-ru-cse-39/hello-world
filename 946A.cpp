//http://codeforces.com/contest/946/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define scll(a) scanf("%I64d",&a)

int main()
{
   ll n,b,c;
   ll m=0,l=0,ans= 0;

   cin>>n;


   for(ll i = 0 ; i < n ; i++){
    ll tmp;
    scll(tmp);

    if(tmp > 0){
        m += tmp;
    }
    else{
        l+= tmp;
    }

   }

   cout<<m-l<<endl;

   return 0;
}
