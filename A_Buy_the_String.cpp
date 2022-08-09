#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n, c0, c1, t;
	    string s;
	    cin >> n >> c0 >> c1 >> t >> s;
	    int ans = 0;
	    for(auto u : s) {
		    if(u == '0') 
			    ans += min(c0, c1 + t);
		    else 
			    ans += min(c1, c0 + t);
	    }
	    cout << ans << endl;
    }
    return 0;
}