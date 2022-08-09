#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        for(int i=0; i<s.size(); i++){
            if(s[i] == 'U'){
                cout << "D";
                continue;
            }
            else if( s[i] == 'D'){
                cout << "U";
                continue;
            }
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}