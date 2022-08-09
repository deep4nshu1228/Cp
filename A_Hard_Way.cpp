#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x1,y1;
        cin >> x1 >> y1;
        int x2,y2;
        cin >> x2 >> y2;
        int x3,y3;
        cin >> x3 >> y3;
        
        if(y1 == y2 && y3 < y1){
            cout << abs(x1-x2) << "\n";
        }
        else if(y1 == y3 && y2 < y1){
            cout << abs(x1-x3) << "\n";
        }
        else if(y2 == y3 && y1 < y2){
            cout << abs(x2-x3) << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}