#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;

        bool ans = true;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
            if(it < 0) ans = false;
        } 

        if(ans){
            cout << "Yes\n" << 101 << "\n";
            for(int i=0; i<101; i++){
                cout << i << " ";
            }
            cout << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}