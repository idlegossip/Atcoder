
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k,n,m;
    cin>>n;
    vector<ll>p;
    for(ll i=1; i<=n; i++)
        p.push_back(i);
    vector<ll>p1;
    vector<ll>p2;
    ll a;
    for(ll i=1; i<=n; i++)
    {
        cin>>a;
        p1.push_back(a);
    }
    for(ll i=1; i<=n; i++)
    {
        cin>>a;
        p2.push_back(a);
    }
    ll cnt=0;
    ll b=0;
    do
    {
        cnt++;
        ll f=1;
        for(ll i=0; i<n; i++)
        {
            if(p[i]==p1[i])
                continue;
            f=0;
            break;
        }
        if(f)
            a=cnt;
        f=1;
        for(ll i=0; i<n; i++)
        {
            if(p[i]==p2[i])
                continue;
            f=0;
            break;
        }
        if(f)
            b=cnt;
    }
    while(next_permutation(p.begin(),p.end()));
    cout<<abs(a-b)<<endl;

}
