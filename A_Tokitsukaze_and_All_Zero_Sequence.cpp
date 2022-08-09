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

        sort(all(a));
        if(a[0] == 0){
            int cnt = 0;
            for(int i=1; i<n; i++){
                if(a[i] != 0){
                    cnt = (n-i);
                    break;
                }
            }
            cout << cnt << "\n";
            continue;
        }

        bool repeat = false;
        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                repeat = true;
                break;
            }
        }
        
        if(repeat)
            cout << n << "\n";
        else
            cout << n+1 << "\n";

    }
    return 0;
}