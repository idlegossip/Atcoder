#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    ll sum1=0,sum2=0;
    cin>>n;
    vector<pair<ll,ll> >v;
    ll x,y;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll res=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=i+1; j<n; j++)
        {
             double a=(v[i].first-v[j].first);
              double b=(v[i].second-v[j].second);
              b=b/a;
              if(b>=-1&&b<=1)
                  res++;

        }
    }
    cout<<res<<endl;

}

