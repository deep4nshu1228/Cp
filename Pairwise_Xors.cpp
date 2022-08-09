#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll x; cin >> x;

        if(x%2 != 0){
            cout << "-1\n";
            continue;
        }

        bool pow_of_2 = false;
        for(int i=0; i<30; i++){
            if(x == (1<<i)){
                cout << "-1\n";
                pow_of_2 = true;
                break;
            }
        }

        if(!pow_of_2){
            ll a = 0;
            ll b = x/2;

            ll i = 0;
            ll c = 0;
            while(c < b){
                c = (1<<i);
                i++;
            }
            c = (1<<(i-2));
            cout << a << " " << b << " " << c << "\n";
        }
    }
    return 0;
}