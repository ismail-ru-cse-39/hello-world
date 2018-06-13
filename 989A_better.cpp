//http://codeforces.com/contest/989/problem/A

#include<bits/stdc++.h>
using namespace std;
int n,i,j;
string s;
int main(){
	for(cin>>s,n=s.size();i<n;i++){
		set<int> h;
		for(j=max(0,i-1);j<min(i+2,n);j++)h.insert(s[j]);
		h.erase('.');
		if(h.size()==3)return cout<<"Yes",0;
	}
	cout<<"No";
}
