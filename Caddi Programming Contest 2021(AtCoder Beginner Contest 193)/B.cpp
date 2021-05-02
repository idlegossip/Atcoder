#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n,c;
    ll res=LONG_LONG_MAX;
    cin>>n;
    while(n--)
    {
          cin>>a>>b>>c;
          if(c-a>0)
          {
                res=min(res,b);
          }
    }
    if(res<1e10)
    cout<<res<<endl;
    else
      cout<<-1<<endl;
}



