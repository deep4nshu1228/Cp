#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n;
        cin >> n;

        if(n > 3 && n%2 != 0){
            cout << "3\n";
        }
        else if(n > 3 && n%2 == 0){
            cout << "2\n";
        }
        else if(n == 3){
            cout << "2\n";
        }
        else if(n == 2){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
    return 0;
}