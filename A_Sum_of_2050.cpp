#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        if(n%2050 == 0){
            ll num = n/2050;
            ll digit_sum = 0;
            while(num>0){
                digit_sum += num%10;
                num /= 10;
            }

            cout << digit_sum << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}