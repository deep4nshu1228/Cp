#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        cout << max(a+b, c+d) << "\n";
    }
    return 0;
}