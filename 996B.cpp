//https://codeforces.com/contest/996/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%d",&a)

int main()
{
    int n,i,cnt = 1,ans = 0;
    int tmp,indx,c;
    int mn = 1e9;
    vector<int>vi;

    sc(n);

     for(i = 0 ; i < n ; i++){
         tmp;
        sc(tmp);
        vi.push_back(tmp);

        //cout<<tmp<<endl;
        tmp -= i;
        //cout<<tmp<<endl;
        c = (tmp+n-1)/n;

        if(mn > c){
            mn = c;
            indx = i+1;
        }
     }



     cout<<indx<<endl;

     return 0;
}
