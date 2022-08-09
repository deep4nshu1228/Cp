#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        
        if(n==1){
            cout << "-1\n";
            continue;
        }

        cout << 2;
        for(int i=0; i<n-1; i++){
            cout << 3;
        }
        cout << "\n";
    }
    return 0;
}