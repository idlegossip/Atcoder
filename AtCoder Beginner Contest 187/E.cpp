#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll>adj[n+10];
    vector<pair<ll,ll> >edge;
    ll a,b;
    for(ll i=1; i<n; i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        edge.push_back({a,b});
    }
    ll level[n+10];
    memset(level,0,sizeof(level));
    level[1]=1;
    queue<ll>q;
    q.push(1);
    while(!q.empty())
    {
        ll node=q.front();
        q.pop();
        for(ll i=0; i<adj[node].size(); i++)
        {
            ll node1=adj[node][i];
            if(level[node1]==0)
            {
                level[node1]=level[node]+1;
                q.push(node1)    ;

            }

        }
    }
    ll query;
    cin>>query;
    ll t,e,x;
    pair<ll,ll>p;
    ll sum[n+10];
    memset(sum,0,sizeof(sum));
    sum[1]=0;
    while(query--)
    {
          cin>>t>>e>>x;
          p=edge[e-1];
          a=p.first;
          b=p.second;
          if(level[a]>level[b])
          {
                swap(a,b);
                t^=3;
          }
          if(t==1)
          {
             sum[1]+=x;
             sum[b]-=x;
          }
          else
            sum[b]+=x;

    }
    q.push(1);
    while(!q.empty())
    {
        ll node=q.front();
        q.pop();
        for(ll i=0; i<adj[node].size(); i++)
        {
            ll node1=adj[node][i];
            if(level[node1]>level[node])
            {
                sum[node1]+=sum[node];
                q.push(node1)    ;

            }

        }
    }
    for(ll i=1;i<=n;i++)
      cout<<sum[i]<<endl;
}
