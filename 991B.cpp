//https://codeforces.com/contest/991/problem/B

#include <bits/stdc++.h>
using namespace std;
#define sc(a) scanf("%d",&a)


bool check(int sum,int n)
{
    return sum*10 >= n*45;
}

int main()
{
    int n,i,sum = 0;
    vector<int>vi;

    sc(n);

    for(i = 0 ; i < n ; i++){
        int tmp;
        sc(tmp);

        vi.push_back(tmp);
        sum += tmp;
    }

    sort(vi.begin(),vi.end());
    i = 0;


    while(!check(sum,n)){
        sum += 5-vi[i];
        i++;
    }


    cout<<i<<endl;

    return 0;

}
