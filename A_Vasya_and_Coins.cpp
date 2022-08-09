#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b; 
        cin >> a >> b;

        if(a == 0){
            cout << 1 << "\n";
        }
        else if(b == 0){
            cout << a+1 << "\n";
        }
        else{
            cout << a + 2*b + 1 << "\n";
        }
    }
    return 0;
}