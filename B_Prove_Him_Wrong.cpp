#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n > 19){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(int i=0; i<n; i++){
                int p = pow(3,i);
                cout << p << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}