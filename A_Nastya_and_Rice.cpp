#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;

        int l = n*(a-b);
        int r = n*(a+b);

        if(r <c-d || c+d < l){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    return 0;
}