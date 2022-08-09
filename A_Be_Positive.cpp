#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    int positive = 0, negetive = 0;
    
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        if(it<0) negetive++;
        else if(it>0) positive++;
    }

    int x = (n+1)/2;
    if(positive<x && negetive<x)
        cout << "0\n";
    else if(positive>=x)
        cout << "1\n";
    else
        cout << "-1\n";
}
int main()
{
    solve();
    return 0;
}