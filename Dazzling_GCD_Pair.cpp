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

        if(a%2 == 0){
            if(b < a+2) cout << "-1\n";
            else cout << a << " " << a+2 << "\n";
        }
        else{
            if(b < a+3) cout << "-1\n";
            else if(a == 1)
                cout << "2 4\n";
            else if(a == 3)
                cout << 3 << " " << 6 << "\n";
            else if(a%3 == 0)
                cout << a << " " << a+3 << "\n";
            else
                cout << a+1 << " " << a+3 << "\n";
        }
    }
    return 0;
}
