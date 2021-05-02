#include<bits/stdc++.h>
using namespace std;
#define ll long long

class segmentree
{
private:
    vector<ll>st,A;
    ll n;
    ll left(ll p)
    {
        return p<<1;
    }
    ll right(ll p)
    {
        return (p<<1)+1;
    }

    void build(ll p,ll l,ll r)
    {
        if(l==r)
            st[p]=l;
        else
        {
            build(left(p),l,(l+r)/2);
            build(right(p),((l+r)/2)+1,r);
            ll p1=st[left(p)],p2=st[right(p)] ;
            st[p]=(A[p1]<=A[p2])?p1:p2;
        }
    }

    ll rmq(ll p,ll l,ll r,ll i,ll j)
    {
        if(i>r||j<l)
            return -1;
        if(l>=i&&r<=j)
            return st[p];
        ll p1 =rmq(left(p),l,(l+r)/2,i,j);
        ll p2=rmq(right(p),((l+r)/2)+1,r,i,j);
        if(p1==-1)
            return p2;
        if(p2==-1)
            return p1;
        return (A[p1]<=A[p2])?p1:p2;

    }
public:
      segmentree(const vector<ll>&_A)
      {
            A=_A;
            n=(int)A.size();
            st.assign(4*n,0);
            build(1,0,n-1);
      }
      ll rmq(ll i,ll j)
      {
            return rmq(1,0,n-1,i,j);
      }
};


int main()
{


}
