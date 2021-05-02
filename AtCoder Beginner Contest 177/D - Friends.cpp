#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll a,b,c;
      ll n,m;
      cin>>n>>m;
      vector<ll>v[1000010];
      ll mx=0,i;
      for(i=0;i<m;i++)
      {
           cin>>a>>b;
           v[a].push_back(b);
            v[b].push_back(a);
            a=v[a].size();
            b=v[b].size();
            mx=max(a,mx);
            mx=max(b,mx);

      }
      cout<<min(mx+1,n)<<endl;
      return 0;
}
