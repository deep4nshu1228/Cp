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

        if(n%4 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}