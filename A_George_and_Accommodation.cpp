#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    int count = 0;
    while(t--){
        int p,q;
        cin >> p >> q;
        if( (q-p) > 1){ count++; }
    }
    cout << count << "\n";
    return 0;
}