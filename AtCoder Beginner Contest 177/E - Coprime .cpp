#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Size=1e6+7;
ll parent[1000010];
ll Rank[1000010];
ll SIZE[1000010];
ll mx=0;
ll GCD(ll a,ll b)
{
    return (b == 0) ? a:GCD(b,a%b);
}
ll LCM(ll a,ll b)
{
    return a*b/GCD(a,b);
}
vector<ll>prime;
ll ar[10000010];
void sive()
{
    ll i,j,k;
    for(i=2; i*i<=1e7; i++)
    {
        if(ar[i])
            continue;
        prime.push_back(i);
        for(j=i+i; j<=1e7; j+=i)
            ar[j]=1;
    }
}
int main()
{
    ll n,m;
    ll i,j,k;
    sive();
    ll a,b;
    cin>>n;
    vector<ll>adj[n+10];
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll gcd=v[0];
    ll mx=0;
    map<ll,ll>mp;
    for(i=0; i<n; i++)
    {
        a=v[i];
        gcd=GCD(gcd,a);
        for(j=0; j<prime.size()&&prime[j]*prime[j]<=a; j++)
        {
            ll f=0;
            while(a%prime[j]==0)
            {
                f=1;
                a/=prime[j];
            }
            if(f)
            {
                mp[prime[j]]++;
                mx=max(mp[prime[j]],mx);

            }
        }
        if(a>1)
        {
            mp[a]++;
            mx=max(mp[a],mx);
        }
    }
    if(mx<=1)
        cout<<"pairwise coprime"<<endl;
    else if(gcd==1)
        cout<<"setwise coprime"<<endl;
    else
        cout<<"not coprime"<<endl;
    return 0;
}
