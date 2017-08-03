/*Lightoj-1045
Level: easy
Type: mathematics

We know that the number of digit of X in a 10 based number system = ⌊log10X⌋+1
So, the number of digit of X in a b based number system = ⌊logbX⌋+1 [here, b is the base of log]
now we know,
          logxY = logzY + logxZ [small letters are the base]
          logzY = logxY/logxZ
          
          and for n!
          
          log(10 n!) = log10 (1*2*3.............*n)
                     = log10 (1) + log10 (2) + ........+ log10 (n)
                     
        so we are gonna keep all the all the value of log of 1 to 10000000 in an array at very beginning step
        then we will just appy the above rule*/
        

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define sz 1000000+100
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
double log_table[sz];

int main()
{
 
    int n,b,test,cas;
    int i;

    memset(log_table,0,sizeof log_table);

    for(i = 1 ; i <= 1000000 ; i++)
    {
        log_table[i] = log_table[i-1] + log(i); //here i kept all log value in log_table array
    }


    scll(test);

    for(cas =  1 ; cas <= test ; cas++)
    {
        sc(n);
        sc(b);

        ll result = (log_table[n]/log(b))+1;//the rule
        ;
        printf("Case %d: %lld\n", cas,result);
    }

    return 0;

}
