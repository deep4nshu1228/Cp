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

        bool balanced_substring = false;

        if(n == 1){
            cout << "-1 -1\n";
            continue;
        }
            
        for(int i=0; i<n-1; i++){
            if(s[i] != s[i+1]){
                cout << i+1 << " " << i+2 << "\n";
                balanced_substring = true;
                break;
            }
        }

        if(!balanced_substring) cout << "-1 -1\n";
    }
    return 0;
}