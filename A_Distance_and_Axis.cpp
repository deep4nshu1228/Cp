#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n,k;
        cin >> n >> k;

        if(n < k){
            cout << k - n << "\n";
        }
        else if(n%2 == k%2){
            cout << "0\n";
        }
        else{
            cout << "1\n";
        }

    }
    return 0;
}