#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;

        int a = n % x;    // here we will make n equals k such that k <= orignal n and k%x = y;   means for some  n , n%x will be y. 
        if(a - y >= 0){    // a >= y
            n = n - (a-y);
        }
        else{
            n = n - a - x + y;
        }
        cout << n << "\n";
    }
    return 0;
}