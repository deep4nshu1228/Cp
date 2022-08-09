#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int h,m;
        cin >> h >> m;
        
        int rh,rm;
        int rt;
        if(m == 0){
            rh = 24 - h;
            rt = rh*60;
        }
        else{
            rh = 23 - h;
            rm = 60 - m;
            
            rt = 60*rh + rm;
        }

        cout << rt <<"\n";
    }
    return 0;
}