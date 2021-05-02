#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     string str;
     ll n;
     cin>>n;
     cin>>str;
     ll cnt=0;
     for(ll i=0;i<n-2;i++)
     {
           if(str[i]=='A'&&str[i+1]=='B'&&str[i+2]=='C')
            cnt++;
     }
     cout<<cnt<<endl;
}

