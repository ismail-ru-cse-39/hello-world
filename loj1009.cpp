/*lightoj 1009
level:easy
Back to the underworld
Here if one node is vampire then all adjacent of that node is lyckans and vice versa as we have to find find the maximum 
possible number of Vampires or Lykans,

In my code I denoted Vampires and Lykans by two different colors, black and red. At first all
nodes are unassigned. Then I select an unassigned node and make it black (or white, whatever).
Using a BFS, I assign white to every node adjacent to a black node, and assign black
to every node adjacent to a white node. Then I take the maximum between the white and black nodes.

One thing to remember, the graph might not be connected.*/

//don't worry level of the problem is easy



#include <bits/stdc++.h>

using namespace std;
#define sc(a) scanf("%d",&a)
#define sz 20010

vector<int>adj[sz];
int color[sz];
//ttl total

int BFS(int strt)
{
    int mx = 0;

    for(int i = 0 ; i < sz ; i++)
    {
        if(!adj[i].empty() && color[i] == 0)
        {
            queue<int>q;
            int blk = 0;
            int wht = 0;
            //int mx = 0;

            q.push(i);
            color[i] = 1;
            wht++;

            while(!q.empty())
            {
                int u = q.front();
                q.pop();

                for(int i = 0 ; i < adj[u].size() ; i++)
                {
                    int v = adj[u][i];

                    if(color[v] == 0)
                    {
                        if(color[u] == 1)
                        {
                            color[v] = 2;
                            blk++;
                        }
                        if(color[u] == 2)
                        {
                            color[v] = 1;
                            wht++;
                        }
                        q.push(v);

                    }
                }
            }
            mx += max(wht,blk);
            //wht = 0;
            //blk = 0;
        }
    }


    //return max(blk,wht);
    return mx;
}

void Initialize()
{
    memset(color,0,sizeof(color));
    for(int i = 0 ; i < sz ; i++)
    {
        adj[i].clear();
    }
}
int main()
{
    int ttl_test,ttl_fight,strt;
    int case_no = 0;

    sc(ttl_test);

    while(ttl_test--)
    {
        Initialize(); //set all to 0;

        case_no++;

        sc(ttl_fight);

        while(ttl_fight--)
        {
            int u,v;
            sc(u);
            sc(v);
            strt = u;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int result = BFS(strt);

        printf("Case %d: %d\n",case_no,result);
    }
    return 0;
}
