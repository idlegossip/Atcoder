#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
ll edge[20][20];
int main()
{
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    if(!m)
    {
          cout<<n<<endl;
          return 0;
    }
    ll a,b;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        a--;
        b--;
        edge[a][b]=1;
        edge[b][a]=1;
    }
    ll sub[10+(1<<n)];
    for(ll i=1; i<(1<<n); i++)
    {
        vector<ll>v;
        for(ll j=0; j<n; j++)
        {
            if((1<<j)&i)
            {
                v.push_back(j);
            }
        }
        sub[i]=1;
        for(ll k=0; k<v.size(); k++)
        {
            for(ll j=k+1; j<v.size(); j++)
            {
                if(!edge[v[k]][v[j]])
                {
                    sub[i]=0;
                    break;
                }
            }
        }
    }
    ll dp[10+(1<<n)];
    for(ll i=1; i<=(1<<n); i++)
        dp[i]=1e17;
    dp[0]=0;
    for(ll i=1; i<(1<<n); i++)
    {
        if(sub[i])
            dp[i]=1;
        for(ll j=i; j; j=(j-1)&i)
        {
            dp[i]=min(dp[i],dp[j]+dp[i^j]);
        }

    }
    cout<<dp[(1<<n)-1]<<endl ;

}



