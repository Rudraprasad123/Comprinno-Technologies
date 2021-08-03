#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t,s;
	cin>>t;
	while(t--)
	{
		float res;
		cin>>s;
		if(s<1500)
		{
			res=s+(s*0.1)+(s*0.9);
		}
		else
		res=s+500+(s*0.98);
		cout<<fixed<<setprecision(2)<<res<<endl;
	}
}
