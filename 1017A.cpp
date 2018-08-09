//http://codeforces.com/contest/1017/problem/A

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a);

int main()
{
    int n,i;
    vector<int>vi;

    sc(n);

    for(i = 0 ; i < n ; i++){
        int a,b,c,d;
        int sum = 0;

        sc(a);
        sc(b);
        sc(c);
        sc(d);

        sum = a+b+c+d;

        vi.push_back(sum);

    }

    int smith = vi[0];

    sort(vi.begin(),vi.end(), greater<int>());

    for(i = 0 ; i < vi.size() ; i++){
        if(vi[i] == smith){
            cout<< i+1<<endl;
            return 0;
        }
    }

    return 0;
}
