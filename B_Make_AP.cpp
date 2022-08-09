#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    int k = 1;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        
        int d = c - b;
        if( (b-d)%a == 0 && (b-d) > 0){
            cout << "YES\n";
            continue;
        }
        d = b - a;
        if( (b + d)%c == 0 && (b+d) > 0){
            cout << "YES\n";
            continue;
        }
        
        if( (c-a)%2 == 0){
            d = (c-a)/2;
            if( (a+d)%b == 0 && (a+d) > 0){
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}