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
        int dif = abs(a - b);
        
        // if(dif % 10 != 0){
        //     cout << (dif / 10) + 1 << "\n";
        // }
        // else{
        //     cout << dif / 10 << "\n";
        // }
        
        /*
        *      x + 9 % 10 -- > upper bound of x%10
        */
        
        cout << (dif+9)/10 <<"\n";
    }
    return 0;
}