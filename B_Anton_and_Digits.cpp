#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{

    int n2,n3,n5,n6;
    cin >> n2 >> n3 >> n5 >> n6;

    // int minimum_digit = min(n2,min(n5,n6));
    // int temp = minimum_digit;
    // int ans = 0;
    // while(temp--){
    //     ans += 256;
    // }
    // n2 -= minimum_digit;

    // if(n2 == 0){
    //     cout << ans << "\n";
    // }
    // else{
    //     int minimum_digit = min(n2,n3);
    //     while(minimum_digit--){
    //         ans += 32;
    //     }
    //     cout << ans << "\n";
    // }

    int n256 = min(n2,min(n5,n6));
    int n32 = min(n3, n2-n256);

    cout << (32*n32 + 256*n256) << "\n";

    return 0;
}