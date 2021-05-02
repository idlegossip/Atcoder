#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1000000007  ;

ll bigmod(ll b,ll p)
{
    if(p==0)
        return 1;
    ll res=bigmod(b,p/2);
    res=(mod+(((res+mod)%mod)*((res+mod)%mod)))%mod;
    if(p%2)
        res=(mod+(res*b))%mod;
    return res;
}
int main()
{
    ll a,b,c,d;
    cin>>a;
    if(a==1)
    {
          cout<<0<<endl;
          return 0;

    }
    if(a==2)
    {
             cout<<2<<endl;
          return 0;
    }
    b=bigmod(10LL,a);
    c=(mod+(2LL*bigmod(9LL,a)))%mod;
    d=bigmod(8LL,a);
    c=(mod+(c-d))%mod;
    cout<<(mod+(b-c))%mod<<endl;

    return 0;
}

