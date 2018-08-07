//http://codeforces.com/contest/1013/problem/B

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)
#define SZ 100000+10

map<int,int>mpii,mpii2;

int main()
{
    int n,x,i;
    vector<int>vi,vi2;
    int flag = 0;
    int flag2 = 0;

    sc(n);
    sc(x);

    for(i = 0 ; i < n ; i++)
    {
        int tmp;

        sc(tmp);

        mpii[tmp]++;
        if(mpii[tmp] >= 2)
        {
            flag = 2;
        }

        vi.push_back(tmp);
        vi2.push_back(tmp&x);
        mpii2[tmp&x]++;

        if(mpii2[tmp&x] >= 2)
        {
            flag2 = 1;
        }
    }


//    for(auto it:mpii)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//
//    }
//
//    for(auto it:mpii2)
//    {
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//
//    for(i = 0 ; i < n ; i++)
//    {
//        cout<<endl;
//        cout<<vi[i]<<" "<<vi2[i]<<endl;
//    }


    if(flag == 2)
    {
        cout<<0<<endl;
        return 0;
    }

    if(flag2 == 0)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(i = 0 ; i < n ; i++)
    {
        if(vi[i] == vi2[i])
        {
            if(mpii2[vi[i]] > 1)
            {
                cout<<1<<endl;
                return 0;
            }
        }

        else{
            if(mpii2[vi[i]] == 1){
                cout<<1<<endl;
                return 0;
            }
        }
    }

    cout<<2<<endl;
    return 0;
}
