#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int k;
    cin >> k;

    vector<int> a(12);
    for(auto &it: a) cin >> it;

    sort(all(a));
    int count = 0;
    int months = 0;

    if(k == 0) cout << 0 << "\n";
    else{
        for(int i=a.size()-1; i>=0; i--){
            count += a[i];
            months++;
            if(count >= k){
                cout << months << "\n";
                break;
            }
        }
        if(count < k) cout << -1 << "\n";
    }
    return 0;
}