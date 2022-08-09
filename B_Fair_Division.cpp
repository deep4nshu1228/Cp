#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int one = 0, two = 0;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        if(it == 1) one++;
        else two++;
    }

    int sum = one + (2*two);
    
    if(sum%2 == 0){
        int div = sum/2;
        if(div%2 == 0)
            cout << "YES\n";
        else{
            if(one)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}