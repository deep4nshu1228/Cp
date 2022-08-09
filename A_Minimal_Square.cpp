#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

        int side = 2*min(a,b);
        int s = max(a,b);
        if(side >= s){
            cout << side*side << "\n";
        }
        else{
            cout << s*s << "\n";
        }
    }
    return 0;
}