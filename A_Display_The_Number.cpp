#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        if(n%2 == 1){
            cout << "7";
            n-=3;
        }
        while(n>0){
            cout << "1";
            n-=2;
        }
        cout << "\n";
    }
    return 0;
}