#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll >v[n+10];
    ll i,j,k;
    ll a,b;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        j=a+b;
        v[0].push_back(j);
        j=a-b;
        v[1].push_back(j);
        j=-a+b;
        v[2].push_back(j);
    }
    for(i=0; i<3; i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    ll res=0;
    for(i=0; i<3; i++)
    {
        n=v[i].size();
        res=max(res,(v[i][n-1]-v[i][0]));
    }
    cout<<res<<endl;
    return 0;
}
