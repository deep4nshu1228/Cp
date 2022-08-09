#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    if(n==1){
        cout << a[0] << "\n";
        return;
    }
    vector<int> b(n);
    for(int i=0; i<n; i++){
        b[i] = a[i];
    }
    sort(all(b));

    if(b[0] == b[1]){
        cout << "Still Rozdil\n";
    }
    else{
        for(int i=0; i<n; i++){
            if(a[i] == b[0]){
                cout << i+1 << "\n";
                return;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}