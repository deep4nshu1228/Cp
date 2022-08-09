#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int size = *max_element(all(a)) + 1;
        vector<int> cnt(size);
        for(int i=0; i<size; i++){
            cnt[i] = 0;
        }

        for(int i=0; i<n; i++){
            cnt[a[i]]++;
        }

        int ans = -1;

        for(int i=0; i<size; i++){
            if(cnt[i] > 2){
                ans = i;
                break;
            }
        }

        cout << ans << "\n";

    }
    return 0;
}