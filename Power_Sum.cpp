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

        int sum = 0;
        for(int i=0; i<a.size(); i++){
            sum += a[i];
        }
        bool already_sum = false;
        int next_2_power_to_sum;
        for(int i=0; i<31; i++){
            if(sum == (1<<i) ){
                already_sum = true;
                break;
            }
            if((1<<i) > sum){
                next_2_power_to_sum = (1<<i);
                break;
            }
        }
        if(already_sum){
            cout << 0 << "\n";
            continue;
        }
        
        int diff = next_2_power_to_sum - sum;
        for(int i = 0; i < a.size(); i++){
            if( (diff+a[i]) % a[i] == 0){
                cout << 1 << "\n";
                cout << 1 << " " << (diff + a[i])/a[i] << "\n";
                cout << i+1 << "\n";
                break;
            }
        } 
    }
    return 0;
}