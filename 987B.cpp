//http://codeforces.com/contest/987/problem/B
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define SZ 100000+10
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%I64d",&a)


int main()
{
    double x,y;

    cin>>x>>y;

   x = y*log(x) - x*log(y);

   if(x < 0 ){
    cout<<"<"<<endl;
   }
   else if(x > 0){
    cout<<">"<<endl;
   }
   else{
    cout<<"="<<endl;
   }
    return 0;
}

