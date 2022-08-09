#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    vector<int> a(4);
    for(auto &it: a) cin >> it;
    sort(all(a));
    // for(int i = 1; i < a[3] - 1; i++){
    //     if( i + (a[1] - i) + (a[2] - i) == a[3]){
    //         cout << i << " " << (a[1]-i) << " " << (a[2]-i) << "\n";
    //     }
    // }

    /*
    *    x4 = a + b + c; x1 = a + b; x2 = a + c; x3 = b + c;
    *    a = x4 - x3 == a[3] - a[2];
    *    b = x4 - x1 == a[3] - a[0];
    *    c = x4 - x2 == a[3] - a[1];
    */

    cout << a[3] - a[0] << " "
         << a[3] - a[1] << " "
         << a[3] - a[2] << "\n";
    return 0;
}