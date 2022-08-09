#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

vector<ll> factorial;
vector<ll> square;
int main()
{
    ll fact = 1;
    for(int i=1; i<15; i++){
        fact *= i;
        factorial.push_back(fact);
    }

    for(int i=0; i<40; i++){
        square.push_back(1LL << i);
    }

    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;

        for(int i=0; i<14; i++){
            for(int j=0; j<40; j++){
                
            }
        }
    }
    return 0;
}