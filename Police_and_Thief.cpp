#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y;
        cin >> x >> y;

        if(x >= y)
            cout << x-y << "\n";
        else
            cout << y-x << "\n";
    }
    return 0;
}