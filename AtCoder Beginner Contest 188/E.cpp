#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Visit[200010];
vector<ll>v[200010];
ll price[200010];
ll dp[200010];
void dfs(ll node)
{
    Visit[node]=1;
    dp[node]=max(dp[node],price[node]);
    for(ll i=0; i<v[node].size(); ++i)
    {
        ll a=v[node][i];
        if(a!=node&&Visit[a]==0)
        dfs(a);
        dp[node]=max(dp[node],dp[a]);
    }
}

int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);

    ll n,m;
    cin>>n>>m;

    ll a,b;
    memset(price,0,sizeof(price));
    memset(dp,0,sizeof(dp));
    for(ll i=1; i<=n; i++)
        cin>>price[i];
     ll mn=0;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    for(ll i=1; i<=n; i++)
    {
        if(Visit[i]==0)
        {
          dfs(i);
        }
    }
    ll ans=-1e16;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=0; j<v[i].size(); ++j)
        {
            a=v[i][j];
            ans=max(ans,dp[a]-price[i]);
        }
    }
    cout<<ans<<endl;

}
