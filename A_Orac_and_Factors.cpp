#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k;
        cin >> n >> k;

        if(n%2 == 0){
            cout << n + 2*k << "\n";
        }
        else{
            int p;
            for(int i=3; i<=n; i+=2){
                if(n%i == 0){
                    p = i;
                    break;
                }
            }
            cout << n + 2*(k-1) + p << "\n";
        }
    }
    return 0;
}