#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,t;
    cin >> n >> t;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    for(int i=1; i<=n; i++){
        t -= (86400 - a[i-1]);
        if(t <= 0){
            cout << i << "\n";
            break;
        }
    }
    return 0;
}