#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int l,r,k;
        cin >> l >> r >> k; 
        if(l == r && l > 1){ cout << "YES\n"; continue; }

        int odd;
        if(l%2 == 0 && r%2 == 0) odd = (r-l)/2;
        else odd = ((r-l)/2)+1;

        cout << (k < odd ? "NO\n" : "YES\n");
    }
    return 0;
}