#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    ll n,x;
    cin >> n >> x;

    vector<pair<char,ll>> a;
    for(int i=0; i<n; i++){
        char c; cin >> c;
        ll k; cin >> k;
        a.push_back(make_pair(c,k));
    }

    ll distressed_kid = 0;
    for(int i=0; i<n; i++){
        if(a[i].first == '+'){
            x += a[i].second;
        }
        else{
            if(x < a[i].second) distressed_kid++;
            else x -= a[i].second;
        }
    }

    cout << x << " " << distressed_kid << "\n";
    return 0;
}