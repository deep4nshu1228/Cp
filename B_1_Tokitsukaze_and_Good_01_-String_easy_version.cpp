#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        string s; cin >> s;

        char check = s[0];
        vector<int> x;
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(s[i] == check)
                cnt++;
            else if(s[i] != check){
                check = s[i];
                x.push_back(cnt);
                cnt=1;
            }
        }
        x.push_back(cnt);

        int ans = 0;
        for(int i=0; i<x.size()-1; i++){
            if(x[i]%2 != 0){
                ans++;
                x[i]--;
                x[i+1]++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}