#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m,k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));

    int arr[101];
    for(int i=0; i<101; i++){
        arr[i]=0;
    }

    for(int i=0; i<n; i++){
        arr[a[i]]++;
    }

    int cnt = 0;
    for(int i=0; i<k; i++){
        if(arr[i] == 0){
            cout << "NO\n";
            return;
        }
    }

    for(int i=0; i<m; i++){
        if(arr[i]==k){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}