#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;

    int flag = 0;

    cin>>n;

    for(i = 0 ; i < n ; i++)
    {
        int tmp;

        cin>>tmp;

        if(tmp == 1)
        {
            flag = 1;
        }
    }

    if(flag == 1){
        cout<<"HARD"<<endl;
    }

    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}
