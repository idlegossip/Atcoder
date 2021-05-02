#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
      ll n,m;
      cin>>n>>m;
      map<ll,ll>mp;
      ll p=0,res=0;
      string str;
      ll a;
      for(ll i=0;i<m;i++)
      {
            cin>>a ;
            cin>>str;
            if(mp[a]==-1)
                  continue;
            if(str=="AC")
            {
              res++;
              p+=mp[a];
            mp[a]=-1;
            }
            else
                 {

                   mp[a]++;
                 }
      }
      cout<<res<<" "<<p<<endl;
}
