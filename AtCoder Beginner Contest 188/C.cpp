#include<bits/stdc++.h>
using namespace std;
#define ll  long long
vector<ll>v;
ll n,m;
ll recur(ll l,ll r)
{
    if(l==r)
        return v[l];
    ll mid=(l+r)/2;
    ll a= recur(l,mid);
    a=max(a,recur(mid+1,r));
    return a;
}
int main()
{

    ll a;
    cin>>n;
    n=1<<n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(n==2)
    {

          if(v[0]<v[1])
            cout<<1<<endl;
          else
            cout<<2<<endl;
          return 0;
    }
    ll mx=-1;
    ll ind,ind1,b;
    for(ll i=0; i<n/2; i+=2)
    {
        if(v[i]>v[i+1])
        {
            a=i;
            b=v[i];
        }
        else
        {
            a=i+1;
            b=v[i+1];
        }
        if(b>mx)
        {
            ind=a;
            mx=b;
        }
    }
    ll mx1=0;
    for(ll i=(n/2); i<n; i+=2)
    {
        if(v[i]>v[i+1])
        {
            a=i;
            b=v[i];
        }
        else
        {
            a=i+1;
            b=v[i+1];
        }
        if(b>mx1)
        {
            ind1=a;
            mx1=b;
        }
    }
    if(mx>mx1)
    {
      ind=ind1;
    }
    cout<<ind+1<<endl;
}

