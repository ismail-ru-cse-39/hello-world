/*Lightoj-1182
Level:Supper easy
Type:brute force

just count how many ones in the bnary represented value of the given number

*/

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define scll(a) scanf("%lld",&a)

ll to_binary(ll n )
{
    ll cnt =0;

    while(n> 0)
    {
        if((n%2)== 1)
        {
            cnt++;
        }
        n /= 2;
    }

    return cnt;
}

int main()
{
    ll test,cas;
    ll n;

    scll(test);

    for(cas = 1 ; cas<= test ; cas++)
    {
        scll(n);

        ll result = to_binary(n);

        if(result %2 == 0)
        {
            printf("Case %lld: even\n",cas);
        }

        else
        {
            printf("Case %lld: odd\n",cas);
        }
    }

    return 0;
}
