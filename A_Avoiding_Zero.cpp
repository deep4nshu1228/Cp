#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        ll sum = 0;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
            sum += it;
        }

        if(sum == 0){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        sort(all(a));
        if(sum > 0){
            for(int i=n-1; i>=0; i--){
                cout << a[i] << " ";
            }
        }
        else{
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}