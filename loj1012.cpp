/*lightoj 1012
guilty prince
here we have to find the number of cell the prince can visit just use a 2dBFS to solve this proble*/
//level:easy

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scch(a) scanf("%c",&a)
#define sz 24
#define pii pair<int,int>

char maze[sz][sz];
int t,n,w,h;
int visited[sz][sz];
int fx[] = {1,-1,0,0};
int fy[] = {0,0,-1,1};


int Bfs2d(int sx , int sy)
{
	memset(visited,0,sizeof visited);
	queue<pii>pq;
	visited[sx][sy] = 1;
	pq.push(pii(sx,sy));
	
	int cnt = 1;
	
	while(!pq.empty()){
		pii pp = pq.front();
		pq.pop();
		
		for(int i = 0 ; i< 4 ; i++){
			int tx = pp.first+fx[i];
			int ty = pp.second+fy[i];
			
			if(tx>= 0 && tx < h && ty>=0 && ty<w && maze[tx][ty] != '#'&&visited[tx][ty] == 0){
				visited[tx][ty] = 1;
				pq.push(pii(tx,ty));
				cnt++;
			}
		}
	
	}	
	
	return cnt;
}

int main()
{
	sc(t);
	
	int initial_x;
	int initial_y;
	
	for(int i = 1 ; i <= t ; i++){
	
		sc(w);
		sc(h);
		
		for(int j = 0 ; j < h ; j++){
			for(int k = 0 ; k < w ; k++){
				//scch(maze[j][k]);
				cin>>maze[j][k];
				
				if(maze[j][k] == '@'){
					initial_x = j;
					initial_y = k;
					}
				}
				
				//getchar();
			}
		
		
		int result = Bfs2d(initial_x,initial_y);
		//printf("%d %d\n",initial_x,initial_y);
		printf("Case %d: %d\n",i,result);
	}
	
	return 0;
}
