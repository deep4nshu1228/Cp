#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n==1) cout << "9\n";
        else if(n==2) cout << "98\n";
        else if(n==3) cout << "989\n";
        else{
            cout << "989";
            for(int i=0; i<n-3; i++){
                cout << i%10;
            }
            cout << "\n";
        }
    }
    return 0;
}