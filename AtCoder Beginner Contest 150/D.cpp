#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll GCD(ll a,ll b){
    return (b == 0) ? a:GCD(b,a%b);
}
ll LCM(ll a,ll b){
    return a*b/GCD(a,b);
}
int main()
{
      ll n,m;
      vector<ll>v;
      cin>>n>>m;
      ll lcm=1;
      ll a;
      ll f=0;
      for(ll i=0;i<n;i++)
      {
            cin>>a;
            v.push_back(a);
            lcm=LCM(lcm,(a+1)/2);
      }
      for(ll i=0;i<n;i++)
      {
            a=(2*lcm)/v[i];
            if(a%2==0)
                  f=1;
      }
      if(f)
      {
            cout<<0<<endl;
            return 0;
      }

      a=m/lcm;
      a=(a+1)/2;
      cout<<a<<endl;
}
