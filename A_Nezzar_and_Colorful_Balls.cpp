#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        vector<int> cnt(n+1);
        vector<int> a(n);
        for(auto &it: a){ 
            cin >> it;
            cnt[it]++;
        }

        cout << *max_element(all(cnt)) << "\n";

        
    }
    return 0;
}