#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,x,a,b;
        cin >> n >> x >> a >> b;

        if(a < b){
            if(a > x){
                cout << b - (a-x) << "\n";
            }
            else{
                cout << min(n,b+(x-a+1)) - 1 << "\n";
            }
        }
        else{
            if(b > x){
                cout << a - (b-x) << "\n";
            }
            else{
                cout << min(n,a+(x-b+1)) - 1 << "\n";
            }
        }
    }
    return 0;
}