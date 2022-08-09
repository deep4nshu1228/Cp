#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z%x == 0 && z%y == 0){
            cout << "ANY\n";
        }
        else if(z%x == 0){
            cout << "CHICKEN\n";
        }
        else if(z%y == 0){
            cout << "DUCK\n";
        }
        else{
            cout << "NONE\n";
        }
    }
    return 0;
}