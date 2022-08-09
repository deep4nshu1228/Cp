#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        if(n == 1){
            cout << a[0] << "\n";
            continue;
        }

        int l = 0;
        int r = 0;
        int val = n+1;
        for(int i=0; i<n; i++){
            if(a[i] != i+1){
                l = i;
                val = i+1;
                break;
            }
        }

        for(int i=0; i<n; i++){
            if(a[i] == val){
                r = i;
            }
        }

        if(l == r){
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
        }
        else{
            for(int i=0; i<l; i++){
                cout << a[i] << " ";
            }
            for(int i=r; i>=l; i--){
                cout << a[i] << " ";
            }
            for(int i=r+1; i<n; i++){
                cout << a[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}