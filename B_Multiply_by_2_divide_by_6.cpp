#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        ll cnt2 = 0, cnt3 = 0;
        while(n%2 == 0){
            n /= 2;
            cnt2++;
        }
        while(n%3 == 0){
            n /= 3;
            cnt3++;
        }

        if(n==1 && cnt2 <= cnt3){
            cout << (2*cnt3 - cnt2) << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}