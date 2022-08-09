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

        int odd_index_odd = 0, odd_index_even = 0;

        for(int i=0; i<n; i+=2){
            if(a[i]%2 == 0)
                odd_index_even++;
            else
                odd_index_odd++;
        }
        if(odd_index_even > 0 && odd_index_odd > 0){
            cout << "NO\n";
            continue;
        }

        int even_index_odd = 0, even_index_even = 0;

        for(int i=1; i<n; i+=2){
            if(a[i]%2 == 0)
                even_index_even++;
            else
                even_index_odd++;
        }

        if(even_index_even > 0 && even_index_odd > 0){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }
    return 0;
}