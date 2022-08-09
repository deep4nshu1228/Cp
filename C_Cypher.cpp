#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    vector<int> b1(n);
    vector<string> b2(n);
    for(int i=0; i<n; i++)
        cin >> b1[i] >> b2[i];

    for(int i=0; i<n; i++){
        int up=0,down=0;
        for(int j=0; j<b1[i]; j++){
            if(b2[i][j] == 'D') down++;
            else up++;
        }

        int cnt = abs(down-up);
        if(down>=up){
            cout << (a[i]+cnt)%10 << " ";
        }
        else{
            int k = a[i] - cnt;
            int l;
            if(k<0){
                l = (k-9)/10;
                l = -1*10*l;
            }
            else l = 0;
            cout << k+l << " ";
        }
    }
    cout << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}