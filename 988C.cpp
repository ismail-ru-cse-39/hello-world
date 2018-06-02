//http://codeforces.com/contest/988/problem/C

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define x first
#define y second
#define sc(a) scanf("%d",&a)


int main()
{
    int k;
    sc(k);

    map<int,pii>mppair;

    for(int i = 1 ; i <= k ; i++){
        vector<int>vi;

        int n,sum = 0;
        sc(n);

        for(int i = 0 ; i < n ; i++){
            int tmp;
            sc(tmp);
            sum+=tmp;
            vi.emplace_back(tmp);

        }
        for(int j = 0 ; j < n ; j++){
            auto it = mppair.find(sum - vi[j]);
            if(it != mppair.end()){
                puts("YES");
                printf("%d %d\n%d %d\n",it->y.x,it->y.y, i, j+1);
                return 0;
            }
        }
        for(int j = 0 ; j < n ; j++){
            mppair[sum-vi[j]] = pii(i,j+1);
        }
    }

    puts("NO");

    return 0;

}
