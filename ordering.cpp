#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define int long long int
#define ld long double
#define ff first
#define ss second
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define mod(n) (n) % 1000000007
#define sp << " "
#define ff first
#define ss second
#define precision(n) cout << fixed << setprecision(n);
#define startTime time_t start, end;time(&start);
#define endTime time(&end);double tt = double(end-start);cout<<"Time taken : "<<fixed<<tt<<setprecision(5);cout <<" sec"<< endl;
 
using namespace std;

bool compare(vector<int> a, vector<int> b) {
    int score = 0;
    if ( a[0] > b[0] ) return false;
    if ( a[1] > b[1] ) return false;
    if ( a[2] > b[2] ) return false;
    return a < b;
}
 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int>> v;
        for (int i = 0; i < 3; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            v.pb({a, b, c});
        }
        sort(v.begin(), v.end());
        if ( compare(v[0], v[1]) && compare(v[1], v[2]) )
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        
    }
}
