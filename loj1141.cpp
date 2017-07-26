//ligthoj-1141
//Number Transformation

#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define sz 100000+100;

const int max_s = 101, max_t = 1001;

int factor[max_t][4],deg[max_t],d[max_t],flag[max_t];

int test,cs;

void Factor_n(){
	int i,j;
	
	for(i = 4; i < max_t ; i+=2){
		factor[i][deg[i]++] = 2;
	}
	
	for(i = 3 ; i < max_t ; i+= 2)
	{
		if(!deg[i]){
		for(j = i+i ; j < max_t ; j+= i){
			factor[j][deg[j]++] = i;
		}
	}
	}
}

int BFS(int s , int t){
	queue<int>q;
	int i,u,v;
	
	memset(flag,0,sizeof flag);
	memset(d,0,sizeof d);
	if(s>t)return -1;
	if(s == t)return 0;
	q.push(s);
	d[s] = 0;
	flag[s] = cs;
	
	while(!q.empty()){
		u = q.front();
		q.pop();
		
		for(i = 0 ; i < deg[u] ; i++){
			v = u+factor[u][i];
			
			if(v<=t && flag[v] != cs){
				d[v] += d[u]+1;
				if(v == t){
					return d[v];
					
				}
				flag[v] = cs;
				q.push(v);
			}
		}
	}
	
	return -1;
}

int main()
{
	int s,t;
	Factor_n();
	
	sc(test);
	
	for(cs = 1 ; cs <= test ; cs++){
		sc(s);
		sc(t);
		
		printf("Case %d: %d\n",cs,BFS(s,t));
	
	}
	
	return 0;
}
