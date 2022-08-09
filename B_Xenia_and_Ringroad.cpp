#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(m);
    for(auto &it: a) cin >> it;

    ll count = a[0] - 1;

    for(int i=1; i<m; i++){
        if(a[i] >= a[i-1]){
            count += a[i] - a[i-1];
        }
        else{
            count += n - (a[i-1] - a[i]);
        }
    }

    cout << count << "\n";
    return 0;
}