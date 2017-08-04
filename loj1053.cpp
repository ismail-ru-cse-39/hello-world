/*Lightoj-1053
level:supper easy

just use The Pythagorean Theorem a2+b2=c2
NB:Never forget to check for each side of trianlge as  hypotenuse and use double instead of float

#include <bits/stdc++.h>

using namespace std;
#define sclf(a) scanf("%lf",&a)
int main()
{
   // freopen("output.txt","w",stdout);

    int test,cas;

    double a,b,c;
    scanf("%d",&test);


    for(cas = 1; cas <= test ; cas++ ){
    sclf(a);
    sclf(b);
    sclf(c);

    if(sqrt((a*a)+(b*b))== c || sqrt((a*a)+(c*c))== b || sqrt((c*c)+(b*b))== a){
        printf("Case %d: yes\n",cas);
       }

       else{
        printf("Case %d: no\n",cas);
       }

    }

    return 0;
}
