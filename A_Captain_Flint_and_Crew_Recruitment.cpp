#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        if(n<31){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            if(n == 36 || n == 40 || n == 44){
                cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << endl;
            }
            else{
                cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
            }
        }
    }
    return 0;
}