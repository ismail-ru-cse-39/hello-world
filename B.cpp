#include<bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)

int main()
{
    int n,A,B,C,T;

    cin>>n>>A>>B>>C>>T;

    int arr[n+10];
    long long int res = 0;
    for(int i = 0 ; i < n ; i++){
        sc(arr[i]);
        res += max(A,(T-arr[i])*(C-B)+A);
    }

    cout<<res<<endl;

    return 0;
}
