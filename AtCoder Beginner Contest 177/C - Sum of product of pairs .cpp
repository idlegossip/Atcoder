
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e9+7;
int main()
{
    ll a,b,c;
    ll l;
    ll n;

    ll i,j,k;
    ll mn=0;
    cin>>n;
    vector<ll>v;
    ll cnt=0;
    ll cum[n+10]= {0};
    for(j=0; j<n; j++)
    {
        cin>>a;
        v.push_back(a);
        if(!j)
            cum[j]=a;
        else
            cum[j]=cum[j-1]+a;
    }
    for(j=1; j<n; j++)
    {
        a=cum[j-1]%mod;
        b=v[j]%mod;
        cnt+=(a*b)%mod;
        cnt%=mod;

    }
    cout<<cnt<<endl;
    return 0;
}
