#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b; cin >> a >> b;
        
        int f = a*10;
        int s = b*5;

        if(f == s)
            cout << "ANY\n";
        else if(f > s)
            cout << "FIRST\n";
        else
            cout << "SECOND\n";
    }
    return 0;
}