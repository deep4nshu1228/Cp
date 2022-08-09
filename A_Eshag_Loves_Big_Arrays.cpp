#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int mn = *min_element(all(a));
        int cnt = count(all(a), mn);

        cout << n-cnt << "\n";
    }
    return 0;
}