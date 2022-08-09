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

        int cnt = 0;
        vector<int> a(n);
        for(auto &it: a){
            cin >> it;
            cnt += it;
        } 

        if(cnt%n == 0){
            cout << cnt/n << "\n";
        }
        else{
            cout << cnt/n + 1 << "\n";
        }
    }
    return 0;
}