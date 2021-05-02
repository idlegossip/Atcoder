#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1000000007  ;
ll dp[2010];
ll suu(ll s)
{
      if(s==0)
            return 1;
      if(s<3)
            return 0;
      if(s<6)
            return 1;
      if(dp[s]!=-1)
            return dp[s];
            ll res=0;
      for(ll i=3;i<=s;i++)
      {
          res=(mod+(res+(mod+suu(s-i))%mod))%mod;
      }
      dp[s]=res;
      return  res;

}
int main()
{
    ll a,b,c,d;
    memset(dp,-1,sizeof(dp));
    dp[0]=1;
    cin>>a;

    cout<<(mod+suu(a))%mod<<endl;

    return 0;
}
