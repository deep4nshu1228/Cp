#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    if(n<10){
        cout << n << "\n";
        return; 
    }
    int sum = 0;
    vector<int> a;
    int iter = 9;
    while((n-sum)>=iter){
        a.push_back(iter);
        sum += iter;
        iter--;
        if(iter==1)
            break;
    }
    a.push_back(n-sum);
    sort(all(a));
    for(int i=0; i<a.size(); i++){
        if(a[i]==0) continue;
        cout << a[i];
    }
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}