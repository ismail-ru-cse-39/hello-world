//http://codeforces.com/contest/950/problem/A

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int l,r,a,ans = 0;

    cin>>l>>r>>a;

   int mn = min(l,r);
   int mx = max(l,r);
   int rest = mx - mn;

   while(mn < mx && a > 0){
    mn++;
    a--;
   }

   ans = mn*2 + (( a/2)*2);


   cout<<ans<<endl;

    return 0;
}
