#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

ll sum_of_digits(ll n){
    ll sum = 0;
    while(n > 0){
        int rem = n%10;
        sum += rem;
        n = n/10;
    }
    return sum;
}

ll gcd(ll n){
    ll tmp = n, digit_sum = sum_of_digits(tmp);
    return __gcd(n,digit_sum);
}

int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n;
        cin >> n;

        while(gcd(n) == 1){
            n++;
        }
        cout << n << "\n";
        
    }
    return 0;
}