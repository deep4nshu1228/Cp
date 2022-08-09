#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int jump = 1;
    for(int i=0; i<n; i+=jump){
        cout << s[i];
        jump ++;
    }
    cout << "\n";

    return 0;
}