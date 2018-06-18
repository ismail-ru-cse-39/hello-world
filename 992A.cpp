//http://codeforces.com/contest/992/problem/0

#include<bits/stdc++.h>
using namespace std;
#define SZ 100000+5
#define sc(a) scanf("%d",&a)

map<int,int>mpi;

int main()
{
    int n,i,tmp;

    sc(n);

    for(i = 0 ; i < n ; i++){
        sc(tmp);

        if(tmp != 0){
//            if(tmp < 0){
//                tmp*= -1;
//                mpi[tmp]++;
//            }

                mpi[tmp]++;

        }
    }

    cout<<mpi.size()<<endl;

    return 0;
}
