#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
      sort(a,a+n);
      cout<<a[0]*(n-1)<<endl;
    }
    return 0;
}
