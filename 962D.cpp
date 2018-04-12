#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll>mp,vis;

ll arr[150000+10];

#define scll(a) scanf("%I64d",&a)
#define printll(a) printf("%I64d",a)
#define print_n_line() printf("\n")


bool check(ll a)
{
    if(mp[a] > 1){
        return true;
    }
    else return false;
}

int main()
{
    ll n,i,a,b = 0;

    scll(n);
    for(i = 0 ; i < n ; i++){
        scll(a);
        mp[a]++;
        arr[i] = a;
        while(check(a)){
            b++;
            mp[a] = 0;
            arr[vis[a]] = 0;
            a *= 2;
            mp[a]++;
            arr[i] = a;

        }
        vis[a] = i;
    }


    printll(n-b);
    print_n_line();
//      cout<<n<<" " <<b<<endl;

    for(i = 0 ; i < n ; i++){
        if(arr[i] != 0){
            printll(arr[i]);
            printf(" ");
        }

//        cout<<arr[i]<<" " <<endl;
    }

    printf("\n");

    return 0;

}
