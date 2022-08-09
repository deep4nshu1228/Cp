#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    ll k, prime, m, tc, num, t = 4;

    cin >> num;

    ll arr[num], sum = 0;
    for(ll i = 0; i < num; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    vector <ll> vc;
    ll sum2 = 0;
    for(ll i = 0; i < num; i++){
        if(i == 0 || arr[i] * 2 <= arr[0]){
            vc.push_back(i + 1);
            sum2 += arr[i];
        }
    }


    if(sum2 * 2 > sum){
        cout << vc.size() << endl;
        for(ll i = 0; i < vc.size(); i++){
            cout << vc[i] << (i + 1 < vc.size() ? ' ' : '\n');
        }
    }
    else cout << "0" << endl;
        
}
int main()
{
    solve();
    return 0;
}