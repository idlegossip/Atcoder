
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    ll i,j;
    ll cnt=0;
    ll a,b;
    cin>>n;
    vector<pair<ll,ll> >vp;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vp.push_back({a,b});
    }
    for(i=0; i<n-2; i++)
    {
        if(vp[i].first==vp[i].second&&vp[i+1].first==vp[i+1].second&&vp[i+2].first==vp[i+2].second)
            cnt=1;
    }
    if(cnt)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}
