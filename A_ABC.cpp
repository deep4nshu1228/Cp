#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 1){
            cout << "YES\n";
        }
        else if(n == 2 && s[0] != s[1]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}