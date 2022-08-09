#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int cnt = 0;
    for(int i=0; i<n; i+=2){
        cnt += a[i+1]-a[i];
    }
    cout << cnt << "\n";
    return 0;
}