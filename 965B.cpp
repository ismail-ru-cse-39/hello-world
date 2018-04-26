#include <bits/stdc++.h>
using namespace std;

#define SZ 123
char arrc[SZ][SZ];

int main()
{
    int n,K;

    cin>>n>>K;

    for(int i = 0 ; i < n ; i++){
        scanf("%s",arrc[i]);
    }

    int mx = 0 , x = 0, y = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){

            if(arrc[i][j] == '.'){

                int tot = 0, cnt = 0;

                for(int a = 0 ;   a< n ; a++){
                    if(arrc[i][a] == '#' ){
                        if(a > j){
                            break;
                        }
                        cnt = 0;
                    }
                    else{
                        cnt++;
                    }
                    if(a-j >= K){
                        break;
                    }
                    if(a >= j && cnt >= K){
                        tot++;
                    }



                }

                cnt = 0 ;

                for(int b = 0 ; b < n ; b++){
                    if(arrc[b][j] == '#'){
                        if(b > i ){
                            break;
                        }
                        cnt = 0;
                    }
                    else{
                        cnt++;
                    }

                    if(b-i >= K){
                        break;
                    }
                    if(b >= i && cnt>= K){
                        tot++;
                    }
                }
                if(tot > mx){
                    mx = tot;
                    x = i;
                    y = j;
                }
            }
        }
    }

    cout<<x+1<<" "<<y+1<<endl;

    return 0;
}
