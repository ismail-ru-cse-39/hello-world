//http://codeforces.com/contest/965/problem/D
//partial_sum

#include <bits/stdc++.h>
using namespace std;

const int SZ =  1e5+11;
#define sc(a) scanf("%d",&a)

int W,L,s[SZ],d[SZ],ans = 0x3f3f3f3f;

int main()
{
    sc(W);
    sc(L);

    for(int i = 1 ; i < W ; i++){
        sc(d[i]);
    }

    partial_sum(d+1,d+W,s+1);

    for(int i = L ; i < W; i++){
        ans = min(ans, s[i]-s[i-L]);
    }

    printf("%d\n",ans);

    return 0;
}
