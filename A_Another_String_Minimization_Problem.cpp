#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    string s = "";
    for(int i=0; i<m; i++){
        s.push_back('B');
    }

    for(int i=0; i<n; i++){
        if(a[i] < (m+1-a[i])){
            if(s[a[i]-1]=='A')
                s[m-a[i]] = 'A';
            else
                s[a[i]-1] = 'A';
        }
        else{
            if(s[m-a[i]] == 'A')
                s[a[i]-1] = 'A';
            else
                s[m-a[i]] = 'A';
        }
    }
    cout << s << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}