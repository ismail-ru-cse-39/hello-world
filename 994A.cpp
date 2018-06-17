//http://codeforces.com/contest/994/problem/A

#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)

int check[20];

int main()
{
    int n,m,i,j;
    int digit[11],finger_print[11];

    //taking input

    sc(n);
    sc(m);

    for(i = 0 ; i < n ; i++){
        sc(digit[i]);

    }

    for(i = 0 ; i < m ; i++){
        sc(finger_print[i]);
        check[finger_print[i]] = 1;//marking the finger_print digit in check array
    }

    //solve

    for(i = 0 ; i < n ; i++){
        if(check[digit[i]] == 1){
            printf("%d ",digit[i]);
        }
    }

    cout<<endl;

    return 0;
}
