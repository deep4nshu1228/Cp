#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int arr[26];
void solve(){
    for(int i=0; i<26; ++i)
        arr[i] = 0;

    int n; cin >> n;

    string s; cin >> s;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[s[i]-'A'] == 0){
            ans+=2;
        }
        else{
            ans += 1;
        }    
        arr[s[i]-'A']++;
    }

    cout << ans << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}