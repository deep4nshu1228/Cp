#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> b(n);
    for(int i = 0; i < n; i++){
        if(a[i] > m){
            b[i] = (a[i] + m - 1)/m;
        }
        else b[i] = 0;
    }

    ll last = 0;
    for(int i = 0; i < n; i++){
        if(b[i] >= b[last]){
            last = i;
        }
    }

    cout << last + 1 << "\n";
    return 0;
}