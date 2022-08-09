#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s; cin >> s;

    int n = s.size();
    int cnt_a = count(all(s),'a');

    int ans;
    if(cnt_a > n/2){
        ans = n;
    }
    else{
        ans = 2*cnt_a - 1;
    }

    cout << ans << "\n";
    return 0;
}