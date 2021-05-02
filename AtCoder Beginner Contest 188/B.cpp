#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{

    ll n,m;
    vector<ll>v;
    ll a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
          cin>>a;
          v.push_back(a);
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
          cin>>a;
         sum+=(v[i]*a);
    }
    if(sum==0)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;


}

