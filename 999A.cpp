#include <bits/stdc++.h>
using namespace std;
int n,k,i,s,f,a[179000];;
int main()
{

    cin>>n>>k;
    for(i = 1; i<=n; i++)
    {
        cin>>a[i];

    }

    int l = 1,co=0,r=n;

    while(a[l] <= k && l<=n){
        l++;
        co++;
    }

    while(a[r] <= k && r >= 0 && r > l){
        r--;
        co++;
    }

    cout<<co<<endl;

    return 0;
}
