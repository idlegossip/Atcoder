
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      ll mx1,mx2,mn1,mn2;
      mx1=a*c;
      mx2=b*c;
      mn1=a*d;
      mn2=b*d;
      cout<<max(mx1,max(mx2,max(mn1,mn2)))<<endl;
      return 0;
}
