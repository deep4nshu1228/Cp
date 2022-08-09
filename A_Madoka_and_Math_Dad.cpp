#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        int type;
        if(n%3 == 1){
            type = 1;
        }
        else{
            type = 2;
        }

        int sum = 0;
        while(sum != n){
            cout << type;
            sum += type;
            type = 3 - type;
        }

        cout << "\n";
    }
    return 0;
}