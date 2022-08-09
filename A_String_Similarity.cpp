#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        string s; cin >> s;

        int index = 0;
        for(int i=0; i<2*n-1; i+=2){
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}