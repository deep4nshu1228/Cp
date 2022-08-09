#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &it: a) cin >> it;
        vector<int> b(n);
        for(auto &it: b) cin >> it;

        sort(all(a));
        sort(all(b));
        int i = 0;
        while(k--){
            if(a[i] < b[n-i-1]){
                swap(a[i], b[n-i-1]);
            }
            i++;
        }

        int sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}