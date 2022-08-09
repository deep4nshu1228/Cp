#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        sort(all(a));

        int coins = 0;
        int count = 0;
        for (int i = a.size() - 1; i >= 0; i--)
        {
            coins += a[i];
            count++;
            if(coins >= x){
                break;
            }
        }
        cout << ( coins >= x ? count : -1) << "\n";
    }
    return 0;
}