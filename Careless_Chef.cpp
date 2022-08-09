#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool odd(int x){
    if(x%2 != 0) return true;
    return false;
}
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;

        int even_cnt = 0;
        int odd_cnt = 0;

        vector<int> a(2*n);
        for(auto &it: a){
            cin >> it;
            if(odd(it)) odd_cnt++;
            else even_cnt++;
        }

        if(even_cnt%2 == 0 && odd_cnt%2 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}