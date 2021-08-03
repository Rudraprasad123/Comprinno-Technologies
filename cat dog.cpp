#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()

{
    ll t;
    cin>>t;
    while (t--)
    {
      ll c,d,l;
      cin>>c>>d>>l;
      if (c>2*d)
      {
          if ((l%4==0) && (l<=4*(c+d)) && (l>=4*(c-d)))
          cout<<"yes\n";
          else
          cout<<"no\n";
      }
      else
      {
           if  ( (l%4==0) && (l<=4*(c+d)) && (l>=(4*d))  )
          cout<<"yes\n";
          else
          cout<<"no\n";
      }
      
    }
return 0;
}
