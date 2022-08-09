#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(100%n == 0){
            cout << 100/n << "\n";
        }
        else{
            int max_div = 1;
            for(int i=2; i<n; i++){
                if(n%i == 0 && (100-n)%i == 0){
                    max_div = i;
                }
            }
            cout << (100/max_div) << "\n";
        }
    }
    return 0;
}