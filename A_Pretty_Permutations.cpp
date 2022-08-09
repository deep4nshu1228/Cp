#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n%2 == 0){   
            for(int i=1; i<=n; i+=2){
                cout << i+1 << " " << i << " ";
            }
            cout << "\n";
        }
        // else if(n == 3){
        //     cout << "3 1 2\n";
        // }
        else{
            for(int i = 1; i <= n - 3; i+=2){
                cout << i+1 << " " << i << " ";
            }
            cout << (n) << " " << (n - 2) << " " << (n - 1) << "\n";
        }
    }
    return 0;
}