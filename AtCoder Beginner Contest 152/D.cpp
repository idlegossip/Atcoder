#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n;
      cin>>n;
      ll ar[11][11]={0};
      for(ll i=1;i<=n;i++)
      {
            ll a,b;
            b=i%10;
            ll x= i;
            while(x)
            {
                  a=x%10;
                  x/=10;
            }
            ar[a][b]=ar[a][b]+1;

      }
      ll ans=0;
      for(ll i=1;i<10;i++)
      {
            for(ll j=1;j<10;j++)
            {
              ans+=ar[i][j]*ar[j][i]    ;
            }
      }
      cout<<ans<<endl;


}
