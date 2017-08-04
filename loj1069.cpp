/*lightoj-1069
level- supper easy
just remember the lift is open in the very begining 
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define scll(a) scanf("%lld",&a)

int main()
{
    ll test,cas,my_pos,lift_pos;
    scll(test);

    for(cas = 1 ; cas <= test ; cas++){
        scll(my_pos);
        scll(lift_pos);

        ll result;

        result = abs(my_pos - lift_pos)*4+my_pos*4+(5+3)*2+3;

        printf("Case %lld: %lld\n",cas,result);

    }

}

