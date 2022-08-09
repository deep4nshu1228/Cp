#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;

        if(n == 1 || n == 2){
            cout << 1 << "\n";
        }
        else if( (n-2)%x == 0){
            cout << (n-2)/x + 1 << "\n";
        }
        else{
            cout << (n-2)/x + 2 << "\n";
        }
    }
    return 0;
}