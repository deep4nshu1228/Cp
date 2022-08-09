#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int mn = abs(a[0] - a[n-1]);
    int f = 0, s = n-1;

    for(int i=1; i<n; i++){
        if(abs(a[i] - a[i-1]) < mn){
            mn = abs(a[i] - a[i-1]);
            f = i-1;
            s = i;
        }
    }

    cout << f+1 << " " << s+1 << "\n";
    return 0;
}