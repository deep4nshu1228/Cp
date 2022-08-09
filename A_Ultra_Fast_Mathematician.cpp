#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string p,q;
    cin >> p >> q;
    string s;
    for(int i=0; i<p.length(); i++){
        if(p[i] == q[i]) { s.push_back('0'); }
        else { s.push_back('1'); }
    }
    cout << s << "\n";
    return 0;
}