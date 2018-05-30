//http://codeforces.com/contest/987/problem/A

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define SZ 100000+10
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%I64d",&a)

map<string,string>mpstr;
vector<string>vstr;

int main()
{

    mpstr["purple"] = "Power";
    mpstr["green"] = "Time";
    mpstr["blue"] = "Space";
    mpstr["orange"] = "Soul";
    mpstr["red"] = "Reality";
    mpstr["yellow"] = "Mind";

    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        string str;
        cin>>str;
        mpstr[str] = "yes";
    }

    int cnt = 0;
    for(auto it:mpstr){
        if(it.second != "yes"){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    for(auto it:mpstr){
        if(it.second != "yes"){
            cout<<it.second<<endl;
        }
    }


    return 0;
}

