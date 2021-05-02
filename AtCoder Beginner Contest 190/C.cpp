#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    ll a,b;
    cin>>n>>m;
    vector<pair<ll,ll> >vp;
    for(ll i=0; i<m; i++)
    {
        cin>>a>>b;
        vp.push_back({a,b});
    }
    ll k;
    cin>>k;
    vector<pair<ll,ll> >v;
    for(ll i=0; i<k; i++)
    {
        cin>>a>>b;
         v.push_back({a,b});
    }
    ll res=0;
    for(ll i=1; i<(1<<k); i++)
    {
        map<ll,ll>mp3;
        for(ll j=0; j<k; j++)
        {
            a =v[i].first;
            b=v[i].second;
            if((1<<j)&i)
            {
                if(mp3[b])
                    mp3[a]=1;
                else
                    mp3[b]=1;

            }
            else
            {
                if(mp3[a])
                    mp3[b]=1;
                else
                    mp3[a]=1;

            }
        }
        ll cnt=0;
        for(ll i=0; i<m; i++)
        {

            a =vp[i].first;
            b=vp[i].second;
            if(mp3[a]&&mp3[b])
                cnt++;
        }
        res=max(res,cnt);

    }

    cout<<res<<endl;


}
