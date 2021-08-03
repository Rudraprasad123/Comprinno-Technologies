#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[2],n,ans;
	    cin>>a[0]>>a[1]>>n;
	    
	    if(n%2==1)
	    {
	        a[0]=a[0]*2;
	    }
	    sort(a,a+2);
	    
	    ans=(a[1])/a[0];
	    
	    cout<<ans<<endl;
	}
	return 0;
}
