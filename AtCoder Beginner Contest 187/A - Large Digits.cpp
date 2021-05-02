#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n,m;
      ll sum1=0,sum2=0;
      cin>>n>>m;
      while(n)
      {
            ll a=n%10;
            sum1+=a;
            n/=10;
      }
       while(m)
      {
            ll a=m%10;
            sum2+=a;
            m/=10;
      }
      cout<<max(sum1,sum2)<<endl;

}
