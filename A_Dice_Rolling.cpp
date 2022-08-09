#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n%7 == 0)
            cout << (n/7) << "\n";
        else
            cout << (n/7) + 1 << "\n";
    }
    return 0;
}