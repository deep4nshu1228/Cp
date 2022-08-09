#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        int x = (int)s[0]-97;
        int y = (int)s[1]-97;

        if(y > x)
            cout << (26*x) + (y-x) << "\n";
        else
            cout << (26*x) + (y-x+1) << "\n";

    }
    return 0;
}