#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        ll n; cin >> n;
        ll cnt = 0;
        int a[3] = {5,3,2};
        while(n%2 == 0 || n%3 == 0 || n%5 == 0){
            for(int i=0; i<3; i++){
                if(n%a[i] == 0){
                    if(i == 0) n = (4*n)/5;
                    if(i == 1) n = (2*n)/3;
                    if(i == 2) n = n/2;
                    cnt++;
                    break;
                }
            }
        }

        if(n == 1) cout << cnt << "\n";
        else cout << "-1\n";
    }
    return 0;
}