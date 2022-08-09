#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s;
        cin >> s;

        int n = s.size();
        int ones = 0;
        int zeros = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == '1') ones++;
            else zeros++;
        }

        int turns = min(ones, zeros);
        if(turns%2 == 0){
            cout << "NET\n";
        }
        else{
            cout << "DA\n";
        }
    }
    return 0;
}