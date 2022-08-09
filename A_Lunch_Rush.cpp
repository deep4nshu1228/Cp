#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

ll max(ll a, ll b){
    if(a >= b) return a;
    else return b;
}
int main()
{
    int n,k; cin >> n >> k;
    int f1,t1;
    cin >> f1 >> t1;
    ll joy;
    if(t1 > k){
        joy = (f1 - (t1-k));
    }
    else{
        joy = (f1);
    }
    n--;
    while(n--){
        int f,t;
        cin >> f >> t;

        if(t > k){
            joy = max(joy, f - (t-k));
        }
        else{
            joy = max(joy, f);
        }
    }

    cout << joy << "\n";
    return 0;
}