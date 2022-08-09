#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,s;
        cin >> n >> s;

        cout << s / (n*n) << "\n";
    }
    return 0;
}