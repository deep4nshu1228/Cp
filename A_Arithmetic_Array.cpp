#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
         
        vector<ll> a(n);
        for(auto &it: a) cin >> it;

        ll sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum += a[i];
        }
        if(sum == a.size()){
            cout << 0 << "\n";
        }
        else if(sum < a.size() ) {
            cout << 1 << "\n";
        }
        else{
            cout << (sum - a.size()) << "\n";
        }
    }
    return 0;
}