#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;

    int sum = 0;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        sum += it;
    }

    if(m < sum)
        cout << (sum - m) << "\n";
    else    
        cout << "0\n";


}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}