#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
string str[31];
ll Visit[31][31];
ll dis[31][31];
ll dx[]= {0,0,-1,1};
ll dy[]= {1,-1,0,0};
ll cnt=0;

void bfs(ll x,ll y)
{
    queue<pair<ll,ll> >q;
    q.push({x,y});
     Visit[x][y]=1;
    pair<ll,ll>p;
    cnt=LONG_LONG_MIN;
    while(!q.empty())
    {
        p=q.front();
        x=p.first;
        y=p.second;

        q.pop();
        for(ll i=0; i<4; i++)
        {
            ll u=x+dx[i];
            ll v=y+dy[i];
            if(u>=n||v>=m||u<0||v<0)
                continue;
            if(str[u][v]=='#'||Visit[u][v]==1)
                continue;
                 Visit[u][v]=1;
            q.push({u,v});
            dis[u][v]=dis[x][y]+1;
            cnt=max(dis[u][v],cnt);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(ll i=0; i<n; i++)
    {
        cin>>str[i];
    }
    ll res=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(str[i][j]=='.')
            {
                memset(dis,0,sizeof(dis));
                memset(Visit,0,sizeof(Visit));
                cnt=0;
                bfs(i,j);
                res=max(res,cnt);
            }
        }
    }
    cout<<res<<endl;

}
