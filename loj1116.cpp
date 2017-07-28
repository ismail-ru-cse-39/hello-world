/*loj1116
math
level:easy
just ad-hoc
you can do it . just remember the here 0 is consider as even
and for 0 output is 1 0 and for 2 1 2*/


#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define scll(a) scanf("%lld",&a)


int main()
{


    ll i,w,t,m,n,j;

    scll(t);

    for(i = 1 ; i<= t ; i++){
        scll(w);

        if(w == 0){
            printf("Case %lld: 1 0\n",i);
        }
        else if(w == 2){
            printf("Case %lld: 1 2\n",i);
        }
        else if(w%2 == 1){
            printf("Case %lld: Impossible\n",i);

        }
        else{
            //ll sqrt_w = sqrt(w *1.0)+2;
             for( j = 2 ; j < (w/2)+2 ; j += 2){
                if((w%j) == 0){
                    m = w/j;
                    if((m % 2) == 1){
                        n = j;
                        break;
                    }
                }
            }
            printf("Case %lld: %lld %lld\n",i,m,n);
        }
    }

    return 0;

}
