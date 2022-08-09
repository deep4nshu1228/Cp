#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    string s; cin >> s;
    while(m--){
        int l,r;
        char c1,c2;
        cin >> l >> r >> c1 >> c2;

        for(int i=l; i<=r; i++){
            if(s[i-1] == c1)
                s[i-1] = c2;
        }
    }

    cout << s << "\n";
    return 0;
}