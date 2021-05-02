#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll a,b,c;
     string str;
     string sbr;
     cin>>str>>sbr;
     ll l=sbr.size();
     ll n=str.size();
      ll i,j,k;
      ll mn=INT_MAX;
      for(i=0;i<=n-l;i++)
      {
            ll cnt=0;
            for(j=0;j<l;j++)
            {
                  if(str[i+j]!=sbr[j])
                        cnt++;
            }
            mn=min(mn,cnt);
      }
      cout<<mn<<endl;
      return 0;
}
