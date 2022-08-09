#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        for(int i=0; i<n; i++){
            cout << char('a' + i%b);
        }
        cout << "\n";
    }
    return 0;
}