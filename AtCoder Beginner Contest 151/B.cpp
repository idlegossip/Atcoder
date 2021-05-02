#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n,m,k;
      ll sum=0;
      ll a;
      cin>>n>>k>>m;
      for(ll i=1;i<n;i++)
      {
            cin>>a;
            sum+=a;
      }
      ll f=0;
      ll res;
      for(ll i=0;i<=k;i++)
      {
            if((sum+i)/n>=m)
            {
                  f=1;
                  res=i;
                  break;
            }
      }
      if(f)
      {
            cout<<res<<endl;
      }
      else
            cout<<-1<<endl;

}

