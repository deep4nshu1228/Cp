#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y,a,b;
        cin >> x >> y >> a >> b;

        if((y-x)%(a+b) == 0){
            cout << (y-x)/(a+b) << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}