//http://codeforces.com/contest/985/problem/A
//Chess placing

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,arr[100+10],i,cnt_even = 0, cnt_odd = 0;

    sc(n);

    for(i = 1 ; i <= n/2 ; i++){
        sc(arr[i]);
    }

    sort(arr+1,arr+(n/2+1));

    for(i = 1 ; i <= n/2 ; i++){
        cnt_even += abs((i*2) - arr[i]);
        cnt_odd += abs((i*2-1) - arr[i]);

    }

    cout<<min(cnt_even,cnt_odd)<<endl;

    return 0;
}

