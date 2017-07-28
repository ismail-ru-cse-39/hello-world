/*lightoj 1094
math basic
level:supper easy
just observ the given input according to the output you 
will find the clue

if don't then here's the solution 

  if n = 12,m = 3 , then
    initially a = 1; d = 1
    By our known formula in school we get , 
    sum = - (m/2){ (2a) + (m-1)d} +  (m/2){ (2(a+m)) + (m-1)d} - (m/2){ (2(a+2m)) + (m-1)d} + (m/2){ (2(a+3m)) + (m-1)d}
        = (m/2)*(4*m)
        = (m/2)*(( n/m) * m) [ as n/m = 4 here
        = (n*m)/2
        */

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define scll(a) scanf("%lld",&a)

int main()
{
	ll test;
	ll i;
	scll(test);

	for(i = 1 ; i <= test ; i++){
		ll m,n,result = 0;
		scll(n);
		scll(m);

		result = (m*n)/2;

		printf("Case %lld: %lld\n", i,result);
	}

	return 0;
	

}
