#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define sc(a) scanf("%d",&a)
#define SZ 100000+2

int main()
{
   ll k,n,s,p;

   cin>>k>>n>>s>>p;

   ll tmp;



   if(n%s == 0){
    tmp =n/s;
   }
   else{
    tmp = (n/s)+1;
   }
     tmp = tmp*k;
   ll res;
   if(tmp%p == 0){
    res = tmp/p;
   }
   else{
    res = (tmp/p)+1;
   }

   cout<<res<<endl;

    return 0;
}

