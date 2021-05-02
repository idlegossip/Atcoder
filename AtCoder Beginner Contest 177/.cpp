
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Size=1e6+7;
ll parent[1000010];
ll Rank[1000010];
ll SIZE[1000010];
ll mx=0;
void make_set()
{
    for(ll i=0; i<Size; i++)
    {
        parent[i]=i;
        Rank[i]=0;
        SIZE[i]=1;
    }
}
ll Find_set(ll v)
{
    if(parent[v]==v)
        return v;
    return parent[v]=Find_set(parent[v]);
}
void union_set(ll a,ll b)
{
     a=Find_set(a);
     b=Find_set(b);
    if(a!=b)
    {
        if(SIZE[a]<SIZE[b])
            swap(a,b);
        parent[b]=a;
        SIZE[a]+=SIZE[b];
        //cout<<SIZE[a]<<endl;
        mx=max(SIZE[a],mx);
    }
}
int main()
{
    ll n,m;
    ll i,j,k;
    make_set();
    ll a,b;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b;
        union_set(a,b);
    }
    if(mx)
    cout<<mx<<endl;
    else
      cout<<"1"<<endl;
    return 0;
}
