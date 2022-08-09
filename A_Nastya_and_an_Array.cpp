#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    set<int> x;
    for(int i=0; i<n; i++){
        if(a[i])
            x.insert(a[i]);
    }

    cout << x.size() << "\n";
    return 0;
}