#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int m = *max_element(all(a));
    int arr[m+1];
    for(int i=0; i<=m; i++){
        arr[i]=0;
    }
    int j=1;
    for(int i=0; i<n; i++){
        if(arr[a[i]]==0){
            arr[a[i]] = j;
            j++;
        }
    }

    while(k--){
        int q1,q2;
        cin >> q1 >> q2;

        if(arr[q1]==0 || arr[q2]==0)
            cout << "NO\n";
        else if(arr[q1] > arr[q2])
            cout << "NO\n";
        else    
            cout << "YES\n";
    }
    
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}