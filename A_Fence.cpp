#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) {
            swap(a, b);
        }
        if (b > c) {
            swap(b, c);
        }
        cout << max(1, c - a - b + 1) << "\n";
    }
    return 0;
}