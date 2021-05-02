#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll n;
      ll a;
      cin>>n;
      ll mn=LONG_LONG_MAX;
      ll res=0;
      for(ll i=0;i<n;i++)
      {
            cin>>a;
            if(mn>=a)
                  res++;
            mn=min(mn,a);
      }
      cout<<res<<endl;

}
