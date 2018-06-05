//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3778
//Army buddies

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)
#define SZ 100000+5
int lft[SZ],rght[SZ];
int s,b,l,r;

void take_input()
{
    sc(l);
    sc(r);
}

void solution()
{
    lft[rght[r]] = lft[l];

    if(lft[l] != -1){
        printf("%d ",lft[l]);
    }
    else{
        printf("* ");
    }

    rght[lft[l]] = rght[r];

    if(rght[r] != -1){
        printf("%d\n",rght[r]);
    }
    else{
        printf("*\n");
    }

}

int main()
{
  // freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    while(cin>>s>>b)
    {
        if(s == 0 && b==0)
        {
            break;
        }
        for(int i = 1 ; i <= s ; i++)
        {
            lft[i] = i-1;
            rght[i] = i+1;
        }
        lft[1] = -1;
        rght[s] = -1;

        while(b--)
        {
            take_input();
            solution();

        }
        printf("-\n");
    }

    return 0;
}
