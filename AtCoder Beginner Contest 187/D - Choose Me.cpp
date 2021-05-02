#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n;
    vector<ll>v;
    ll x,y,sum=0,sum1=0;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y;
        sum-=x;
        x=2*x+y;
        v.push_back(x);
    }
    ll res=0;
    sort(v.begin(),v.end());
    for(ll i=n-1; i>=0; i--)
    {
        sum1+=v[i];
        res++;
        if(sum+sum1>0)
            break;
    }
    cout<<res<<endl;

}


