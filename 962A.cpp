#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vi;
    int n,i;
    long long sum1 =0,sum = 0;

    cin>>n;
    for(i =0 ; i < n ; i++){
        int tmp;

        scanf("%d",&tmp);
        vi.push_back(tmp);
        sum += tmp;
    }

    if(sum %2 == 0){
        sum /= 2;
    }
    else{
        sum = (sum/2)+1;
    }
    for(i = 0 ; i < n ; i++){
        sum1 += vi[i];

        if(sum1 >= sum){
            cout<<i+1<<endl;
            return 0;
        }
    }


}
