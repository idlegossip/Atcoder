#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      vector<pair<ll,ll> >v;
      ll n,c;
      pair<ll,ll>p;
      ll a,b,x;
      ll res=0;
      ll cur=0,fee=0;
      cin>>n>>c;
      for(ll i=0;i<n;i++)
      {
            cin>>a>>b>>x;
            v.push_back({a,x});
            v.push_back({b+1,-x});
      }
      sort(v.begin(),v.end());
      for(ll i=0;i<v.size();i++)
      {
            p=v[i];
            a=p.first-1;
            b=p.second;
            if(a!=cur)
            {
                  res+=min(c,fee)*(a-cur);
                  cur=a;
            }
            fee+=b;

      }
      cout<<res<<endl;



}
