// #include <bits/stdc++.h>
// #define all(n) (n).begin(), (n).end()
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int tests; cin >> tests;
//     while(tests--){
//         ll a,b,n,s;
//         cin >> a >> b >> n >> s;

//         ll x = s/n;
//         if(b >= s - min(x,a)*n){
//             cout << "YES\n";
//         }
//         else{
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b,n,s;
        cin >> a >> b >> n >> s;

        if(s%n <= b && 1LL * a * n + b >= s){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}