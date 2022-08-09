#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a > b+c)
            cout << "YES\n";
        else if(b > a+c)
            cout << "YES\n";
        else if(c > a+b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}