#include <iostream>
using namespace std;

 bool f(int *ar  ,int n ){
     if(n%2==0){
         return false;
     }
    
    int t = 1;
    for(int i =0;i<n;i++){
        if(t!=ar[i]){
            return false;
        }
        if(i<(n/2)){
            t++;
        }else{
            t--;
        }
    }
    return true;
 }
void solve(){
    int n ;
    cin>>n;
    int *ar = new int[n];
    
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    if(f(ar,n)){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
}
int main() {
	int t=1;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
