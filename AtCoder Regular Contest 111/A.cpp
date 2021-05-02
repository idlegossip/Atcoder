#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod(ll val,ll p,ll m)
{
    if(p==0)
        return 1;
    ll res=mod(val,p/2,m);
    res=res*res;
    if(p%2)
        res=res*10;
    return res;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    cout<<mod(10,n,m)<<endl;
    return 0;
}
