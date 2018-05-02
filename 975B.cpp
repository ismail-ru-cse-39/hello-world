//http://codeforces.com/contest/975/problem/B
//implementation

#include <bits/stdc++.h>
using namespace std;
int a[14],b[14];

int main()
{
    int N = 14,i,j;
    long long int ans = 0;

    for(i = 0 ; i < 14; i++){
        cin>>a[i];
    }

    for(i = 0 ; i < 14 ; i++){
        long long int sum ;

        memcpy(b,a,sizeof(a)); //copying element of array 'a' into array 'b'
        int k,r;

        k = b[i]/N;
        r = b[i]%N;
        b[i] = 0;

         //redistribute
        for(j = i+1 ; j <= i+r ; j++ ){
            b[j%N]++;
        }
        for(j = 0 ; j < N ; j++){
            b[j] += k;
        }

        //collecting even

        sum = 0;
        for(j = 0 ; j < N ; j++){
            if(b[j]%2 ==0){
                sum+=b[j];
            }
        }
        ans = max(ans,sum);

    }

    cout<<ans<<endl;

    return 0;
}
