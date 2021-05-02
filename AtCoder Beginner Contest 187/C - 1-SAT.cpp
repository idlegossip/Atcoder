#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    map<string,ll>mp;
    map<string,ll>mp1;
    cin>>n;

    ll f=0;
    string res;

    for(ll i=0; i<n; i++)
    {
        string str;
        cin>>str;
        if(str[0]=='!')
        {
            ll m=str.size();
            string s="";
            for(ll i=1; i<m; i++)
            {
                s+=str[i];
            }
            mp1[s]=2;
            if(mp[s])
            {
                f=1;
                res=s;
            }
        }
        else
        {
            mp[str]=1;
            if(mp1[str])
            {
                f=1;
                res=str;
            }

        }


    }
    if(f)
    cout<<res<<endl;
    else
      cout<<"satisfiable"<<endl;
}
