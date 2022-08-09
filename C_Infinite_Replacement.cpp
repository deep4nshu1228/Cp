#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s,t;
        cin >> s >> t;
        if(t == "a")
            cout << "1\n";
        else if(count(all(t),'a') != 0)
            cout << "-1\n";
        else    
            cout << (1LL << s.size()) << "\n";
    }
    return 0;
}