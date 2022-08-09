#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n == 1){
            cout << "1\n";
            continue;
        }
        if(n == 2){
            cout << "-1\n";
            continue;
        }

        int j=1;
        for(int i=1; i<= n*n; i+=2){
            cout << i << " ";
            if(j%n == 0) cout << "\n";
            j++;
        }
        for(int i=2; i<=n*n; i+=2){
            cout << i << " ";
            if(j%n == 0) cout << "\n";
            j++;
        }
    }
    return 0;
}