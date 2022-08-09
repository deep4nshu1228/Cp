#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int max_sum(int x){
    return pow(x,2);
}

int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        int res = 1;
        while (max_sum(res) < n){
            res++;
        }

        cout << res << "\n";
    }
    return 0;
}