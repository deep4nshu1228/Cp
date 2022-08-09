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

        // vector<int> a(n);
        // for(auto &it: a) cin >> it;

        // vector<int> b;
        // for(int i=0; i<n; i++){
        //     b.push_back(a[i]);
        // }
        // sort(all(b));

        // int min_unique_element = 0;
        // if(b[0] != b[1]){
        //     min_unique_element = b[0];
        // } 
        // else{
        //     for(int i=1; i<n-1; i++){
        //         if(b[i] != b[i+1] && b[i] != b[i-1]){
        //             min_unique_element = b[i];
        //             break;
        //         }
        //     }
        // }

        // if(min_unique_element == 0){
        //     if(b[n-1] != b[n-2]){
        //         min_unique_element = b[n-1];
        //     }
        //     else{
        //         cout << "-1\n";
        //         continue;
        //     }
        // }

        // for(int i=0; i<n; i++){
        //     if(a[i] == min_unique_element){
        //         cout << i+1 << "\n";
        //     }
        // }

        vector<int> count(n+1), index(n+1);

        for(int i=0; i<n; i++){
            int x; cin >> x;
            count[x]++;
            index[x] = i+1;
        }

        int ans = -1;
        for(int i=0; i<=n; i++){
            if(count[i] == 1){
                ans = index[i];
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}