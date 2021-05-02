#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

     ll a,b,c,d;
     cin>>a>>b;
      string str;
      cin>>str;
      for(ll i=0;i<a;i++)
      {
            if(str[i]=='o')
            b++;
            else
            {
                  if(b)
                        b--;
            }

      }
      cout<<b<<endl;
      return 0;
}


