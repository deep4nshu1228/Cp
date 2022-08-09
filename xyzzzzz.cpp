#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
string decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string binary;
    for (int j = i - 1; j >= 0; j--)
        binary.push_back((char)binaryNum[j]+'0');
    return binary;
}
void solve(){
    string s; cin >> s;
    int m; cin >> m;
    vector<int> a(m);
    for(auto &it: a) cin >> it;

    int n = s.size();
    int ans = 1;
    for(int i=0; i<m; i++){
        string check = decToBinary(a[i]);
        if (s.find(check) != std::string::npos)
            ans = 1;
        else
            ans = 0; 
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}