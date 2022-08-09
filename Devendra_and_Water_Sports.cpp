#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int z,y,a,b,c;
        cin >> z >> y >> a >> b >> c;
        int rem = z-y;
        if(rem >= (a+b+c) ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}