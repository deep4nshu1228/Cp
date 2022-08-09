#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        int temp = n;
        // if(n == 3){
        //     cout << "3 2 1\n" 
        //         <<  "1 3 2\n"
        //         <<  "3 1 2\n";
        //     continue;
        // }
        vector<int> ans(n);
        int index = 0;
        for(int i=n; i>0; i--){
            ans[index] = i;
            index++;
        }
        for(int temp = 0; temp<n; temp++){
            swap(ans[temp],ans[0]);
            for(int i=0; i<n; i++){
                cout << ans[i] << " ";
            }

            cout << "\n";
        }
    }
    return 0;
}