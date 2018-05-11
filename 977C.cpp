//http://codeforces.com/contest/977/problem/C
//11.5.2018
//div3
//sorting

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define int_in(a) scanf("%d",&a)
#define ll_in(a) scanf("%I64d",&a)
#define float_in(a) scanf("%f",&a)
#define double_in(a) scanf("%lf",&a)
#define char_in(a) scanf("%c",&a)
#define str_in(a) scanf("%s",&a)

#define new_line() printf("\n")
#define int_out(a) printf("%d",a)
#define int2_out(a,b) printf("%d %d",a,b)
#define ll2_out(a,b) printf("%I64d %I64d",a,b)
#define ll_out(a) printf("%I64d",a)
#define float_out(a) printf("%f",a)
#define double_out(a) printf("%lf",a)
#define char_out(a) printf("%c",a)
#define str_out(a) printf("%s",a)

#define SZ 2*100000+10

ll ARR[SZ],K,N;

void input()
{
    ll_in(N);
    ll_in(K);

    for(ll i = 0 ; i < N ; i++){
        ll_in(ARR[i]);
    }
}

void solution()
{
    ll cnt = 0;
    ll i;

    sort(ARR,ARR+N);

    if(K == 0){

            if(ARR[0] == 1){
                printf("-1");
            }
            else{
                printf("1");
            }



        return;
    }
    if(ARR[0] == 0){
        if( K+1>= N || ARR[K] == ARR[K+1]){
            printf("-1");
            //new_line();
            return;
        }
        ll_out(ARR[K]);
    }
//debuging purpose

//    for(i = 0 ; i < N ; i++){
//        cout<<ARR[i]<<" ";
//    }
//
//    cout<<endl;

    if(K > N || ARR[K-1] == ARR[K]){
        printf("-1");
       // new_line();
        return;
    }
    ll_out(ARR[K-1]);

    return;
}

int main()
{
    input();
    solution();
    new_line();

}
