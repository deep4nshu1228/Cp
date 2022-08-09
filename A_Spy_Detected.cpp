#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        if(a[0] == a[1]){
            for(int i=2; i<n; i++){
                if(a[i] != a[0]){
                    cout << i+1 << "\n";
                }
            }
        }
        else{
            if(a[0] == a[2]){
                cout << "2\n";
            }
            else{
                cout << "1\n";
            }
        }
    }
    return 0;
}