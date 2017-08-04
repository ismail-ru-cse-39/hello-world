/*lightoj-1107
level:supper easy
just draw the rectangle in a graph you will find the answer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define scll(a) scanf("%lld",&a)

int main()
{
    ll test,cas,x1,y1,x2,y2,x3,y3;


    scll(test);

    for(cas = 1 ; cas <= test ; cas++)
    {
        scll(x1);
        scll(y1);
        scll(x2);
        scll(y2);

        ll n,i;
        printf("Case %lld:\n",cas);
        scll(n);
        for(i = 0 ; i < n ; i++)
        {
            scll(x3);
            scll(y3);
            if((x3 >= x1 && x3 <= x2) && (y3 >= y1 && y3 <= y2))
            {
                printf("Yes\n");
            }

            else
            {
                printf("No\n");
            }

        }
    }

    return 0;
}
