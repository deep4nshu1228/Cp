#include<bits/stdc++.h>
using namespace std;
const int MAX_V = 201;
bool achieve[MAX_V];
void solve() {
    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n + x; i++) {
        achieve[i] = false;
    }
    for(int i = 1; i <= n; i++) {
        int ranking;
        cin >> ranking;
        achieve[ranking] = true;
    }
    for(int k = n + x; k > 0; k--) {
        int v = 0;
        for(int i = 1; i <= k; i++) {
            if(!achieve[i]) v++;
        }
        if(v <= x) {
            cout << k << "\n";
            return;
        }
    }
}
int main() {
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}