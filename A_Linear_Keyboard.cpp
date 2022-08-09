#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        string q;
        cin >> q;

        // vector<int> a;
        // for(int i = 0; i < q.length(); i++){
        //     for (int j = 0; j < s.length(); j++)
        //     {
        //         if(q[i] == s[j]){
        //             a.push_back(j+1);
        //         }
        //     }
        // }

        // int ans = 0;
        // for(int i=0; i<a.size()-1; i++){
        //     ans += abs(a[i] - a[i+1]);
        // }

        // cout << ans << "\n";

        int ans = 0;
        for(int i=0; i<q.length()-1; i++){
            ans += abs(s.find(q[i]) - s.find(q[i+1]));
        }
    }
    return 0;
}