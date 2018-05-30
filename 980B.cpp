//http://codeforces.com/contest/980/problem/B
#include <bits/stdc++.h>

using namespace std;

#define sc(a) scanf("%d",&a)

int n,k,i,j;
char str[10][100];

void take_input()
{
        sc(n);
        sc(k);
}


void solution()
{
    for(i = 1 ; i <= 4; i++){
        for(j = 1 ; j <= n ; j++){
           str[i][j] = '.';
        }
    }

    if(k == 1){
        str[2][(n+1)/2] = '#';
    }
    else if(k == 3){
        str[2][(n+1)/2-1] = str[2][(n+1)/2] = str[2][(n+1)/2+1] = '#';

    }
    else{
        for(i = 1 ; i <= (k+1)/2 ; i++){
            str[2][i+1] = str[3][i+1] = '#';
        }

        if(k%2 == 1){
            str[3][3] = '.';
        }
    }
    puts("YES");

    for(i = 1 ; i <= 4; i++){
        puts(str[i]+1);
    }

    return;
}

int main()
{
    take_input();
    solution();
}
