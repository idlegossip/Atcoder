#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
      string str;
      cin>>str;
      ll l=str.size()-1;
      cout<<str;
      if(str[l]!='s')
            cout<<"s"<<endl;
      else
            cout<<"es"<<endl;
      return 0;

}
