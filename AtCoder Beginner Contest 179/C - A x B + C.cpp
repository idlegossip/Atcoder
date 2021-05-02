#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll res=0;
    for(ll i=1; i<n; i++)
    {
        if(i==1)
            res++;
        else
            res+=2;
        ll k=i;
        for(ll j=2; j*j<=k; j++)
        {
           if(k%j==0)
            {
                res+=2;
                if(k/j==j)
                    res--;
                k/=j;
            }

        }

    }
    cout<<res<<endl;
    return 0;

}

