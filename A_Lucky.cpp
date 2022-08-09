#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        int a=0,b=0;
        for(int i=0; i<3; i++){
            a += (int)(s[i]-'0');
        }
        for(int i=3; i<6; i++){
            b += (int)(s[i]-'0');
        }

        if(a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}