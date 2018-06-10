//http://codeforces.com/contest/946/problem/C

#include <bits/stdc++.h>
using namespace std;
 string str_in;

int main()
{
    int i = 0;
    int indx = 97;


    cin>>str_in;

    while(str_in[i] && indx <= 122){
        if(str_in[i] <= indx){
            str_in[i] = indx++;

        }
        i++;
    }
    if(indx==123){
        cout<<str_in<<endl;

    }

    else{
        cout<<-1<<endl;

    }

    return 0;
}
