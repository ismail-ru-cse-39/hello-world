//http://codeforces.com/contest/998/problem/A

#include <bits/stdc++.h>

using namespace std;

map<int,int>mpii;

int main()
{
    int arr[20],i,n;

    cin>>n;


    int mn= 10000,indx = 0;

    for(i = 0; i < n ; i++){
        cin>>arr[i];
        if(mn > arr[i]){
        mn = arr[i];
        indx = i;
        }

    }
       if(n<2){
        cout<<-1<<endl;
        return 0;
    }
   if(n == 2){
    if(arr[0] == arr[1]){
        cout<<-1<<endl;
        return 0;
    }
   }

    cout<<1<<endl;
    cout<<indx+1<<endl;

    return 0;
}
