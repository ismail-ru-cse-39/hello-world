//http://codeforces.com/contest/967/problem/B
//sorting

#include <bits/stdc++.h>

using namespace std;

#define SZ 100000+10
#define sc(a) scanf("%d",&a)

int main()
{
    int arr[SZ],i,n,S = 0,A,B;

    sc(n);
    sc(A);
    sc(B);
    int h1;
    sc(h1);
    S = h1;
    for(i = 1 ; i < n ; i++){
        sc(arr[i]);
        S += arr[i];
    }

    //int h1 = arr[0];

    sort(arr,arr+n);

    int cnt = 0;

   if(((h1*A)/S)>= B){
    printf("0\n");
    return 0;
   }

    for(i = n-1 ; i > 0 ; i--){
        cnt++;

        double tmp = (h1*A)/(double)(S-arr[i]);
        S -= arr[i];
        //cout<<S<<" "<<tmp<<endl;
        if(tmp >= B){
            printf("%d\n",cnt);
            return 0;
        }
    }
}
