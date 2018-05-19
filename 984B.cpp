//http://codeforces.com/contest/984/problem/B

#include <cstdio>

int n, m;
char s[110][110];

int bomb(int i, int j)
{
	int cnt = 0;
	for(int x=i-1; x<=i+1; ++x)
		for(int y=j-1; y<=j+1; ++y)
			if(s[x][y] == '*')
				++cnt;
	return cnt;
}

int main()
{
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; ++i)
		scanf("%s", s[i]+1);

	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			if(s[i][j]!='*' && bomb(i,j)!=(s[i][j]=='.'?0:s[i][j]-'0'))
			{
				printf("NO");
				return 0;
			}
	printf("YES");
	return 0;
}
