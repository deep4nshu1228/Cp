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

        int even = 0, odd = 0;
        for(int i=0; i<n; i++){
            if(a[i]%2 == 0) even++;
            else odd++;
        }

        if(odd%2 == 0 && odd/2 <= even){
            cout << odd/2 << "\n";
        }
        else{
            cout << even << "\n";
        }
    }

    return 0;
}