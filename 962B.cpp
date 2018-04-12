#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a);
int n,a,b,ans = 0;

void solve( int j)
{

    int flag = 0;
    if(a>b)
    {
        flag = 1;
    }
    for(int i = 0 ; i < j ; i++)
    {
        if(flag)
        {
            if(a>0)
            {
                a--;
                ans++;
            }
            flag = 0;
        }
        else
        {
            if(b>0)
            {
                b--;
                ans++;
            }
            flag = 1;
        }
    }
}


int main()
{


    sc(n);
    sc(a);
    sc(b);
    char st[200000+100];
    scanf("%s",&st);
    st[n] = '*';
    int cnt = 0;

    for(int i = 0 ; i <= n ; i++)
    {
        if(st[i] == '.')
        {
            cnt++;
        }
        else
        {
            solve(cnt);
            cnt = 0;
        }
    }

    cout<<ans<<endl;


    return 0;

}
