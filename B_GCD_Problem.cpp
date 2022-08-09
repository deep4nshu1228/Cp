#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n&1){
            int cur = (n-1)/2;
            if(cur%2 == 0)
                cout << cur-1 << " " << cur+1 << " 1\n";
            else
                cout << cur-2 << " " << cur+2 << " 1\n";
        }
        else{
            cout << n - 3 << " 2 1\n";
        }
    }
    return 0;
}