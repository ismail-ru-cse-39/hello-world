/*Lightoj-1225
Level:Supper easy
Type: Bruteforce

take input as a string then check whether palindrom or not

*/

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define scs(a) scanf("%s",&a);
#define sz 100
int main()
{
    ll test,cas;
    char str[sz];

    scanf("%lld",&test);

    for(cas = 1 ; cas <= test ; cas++)
    {
        scs(str);
        
        char r_str[sz] ;
        
        strcpy(r_str,str); //copy input string

        ll l = strlen(str);

        ll j = l-1;
        ll flag = 0;
        for(ll i = 0 ; i < l ; i++)
        {
            if(str[i] != r_str[j])  //str is comparing from 0 position while r_str is from last (l-1) poition
            {
                flag = 1;
            }
            j--;
        }

        if(flag == 0)
            printf("Case %lld: Yes\n",cas);

        else
            printf("Case %lld: No\n",cas);

    }

    return 0;
}
