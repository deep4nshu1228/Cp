#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;
        int k = 1;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 0){
                if(i>0 && a[i-1] == 0){
                    k = -1;
                    break;
                }
                else{
                    continue;
                }
            }
            if(a[i] == 1){
                if(i>0 && a[i-1] == 1){
                    k += 5;
                }
                else{
                    k += 1;
                }
            }
        }
        cout << k << "\n";
    }
    return 0;
}