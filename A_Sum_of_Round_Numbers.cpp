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
        vector<int> ans;
        int pos = 1;
        int count = 0;
        while(n>0){
            int rem = n%10;
            n = n / 10;
            if(rem * pos > 0) {
                count++;
                ans.push_back(rem * pos);
            }
            pos *= 10;
        }
        cout << count << "\n";
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}