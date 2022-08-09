#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool palindrome(string s){
    int n = s.size();
    for(int i=0; i<n; i++){
        if(s[i] != s[n - 1 - i]){
            return false;
        }
    }
    return true;
}
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        string ans1 = 'a' + s;
        string ans2 = s + 'a';

        if(!palindrome(ans1)){
            cout << "YES\n" << ans1 << "\n";
        }
        else if(!palindrome(ans2)){
            cout << "YES\n" << ans2 << "\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
    return 0;
}