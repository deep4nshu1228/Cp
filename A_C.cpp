#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,n;
        cin >> a >> b >> n;

        int count = 0;
        while(a<=n && b<=n){
            count++;
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
        }
        cout << count << "\n";
    }
    return 0;
}