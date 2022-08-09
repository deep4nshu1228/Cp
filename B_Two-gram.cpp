#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans;
    int freq = 0;
    for(int i=0; i<n-1; i++){
        int cnt = 0;
        for(int j=0; j<n-1; j++){
            if(s[i] == s[j] && s[i+1] == s[j+1]){
                cnt++;
            }
        }
        if(cnt > freq){
            freq = cnt;
            ans = string(1,s[i])+string(1,s[i+1]);
        }
    }
    cout << ans << "\n";

    return 0;
}