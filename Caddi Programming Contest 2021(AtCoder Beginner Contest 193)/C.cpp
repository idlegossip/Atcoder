#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n;

    cin>>n;
   ll res=0;
   map<ll,ll>mp;
   for(ll i=2;i*i<=n;i++)
   {
         a=i;
         while(1)
         {
               a*=i;
               if(a>n)
                  break;
                  if(mp[a])
                        continue;
                  mp[a]=1;
               res++;
         }
   }
    cout<<n-res<<endl;
}



