#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int c,d;
        cin >> c >> d;

        if(c == 0 && d == 0){
            cout << 0 << "\n";
            continue;
        }
        if( (c+d)%2 == 0){
            if( (c+d)/2 == c){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}