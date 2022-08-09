#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll a,b,k;
        cin >> a >> b >> k;
        ll pos;

        if(k%2 == 0){
            pos = (k/2)*(a-b);
        }
        else{
            pos = ((k/2)*(a-b))+a;

        }
        cout << pos << "\n";
    }
    return 0;
}