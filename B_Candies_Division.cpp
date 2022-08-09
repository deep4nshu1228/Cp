#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;

        if(n%k == 0){
            cout << n << "\n";
        }
        else{
            if(k/2 < n%k)
                cout << ((n/k)*k) + k/2  << "\n";
            else
                cout << n << "\n";
        }
    }
    return 0;
}