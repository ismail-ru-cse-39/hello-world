//http://codeforces.com/problemset/problem/854/B

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
	ll n,k;

	cin>>n>>k;

	if(k == 0 || n==1 || n == k){
	    cout<<0<<" "<<0<<endl;
	    return 0;
	}

	cout<<"1"<<" ";

	int x = n/3;

	if(k<=x){
	    cout<<k*2<<endl;
	    return 0;
	}
	if(k > x){
        cout<<n-k<<endl;
        return 0;
	}

	return 0;
}
