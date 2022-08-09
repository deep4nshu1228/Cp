#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;

        // if(n%2 != 0){
        //     cout << n/2 << "\n";
        // }
        // else{
        //     cout << (n/2 - 1) << "\n";
        // }

        /* floor value of n-1/2 */
        cout << (n-1)/2 << "\n";
    }
    return 0;
}