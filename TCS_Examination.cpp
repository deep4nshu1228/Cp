#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int x,y,z;
        cin >> x >> y >> z;

        int total_d = a + b + c;
        int total_s = x + y + z;

        if(total_d == total_s){
            if(a != x){
                cout << (a > x ? "DRAGON\n" : "SLOTH\n");
            }
            else if(b != y){
                cout << (b > y ? "DRAGON\n" : "SLOTH\n");
            }
            else if(c != z){
                cout << (c > z ? "DRAGON\n" : "SLOTH\n");
            }
            else{
                cout << "TIE\n";
            }
        }
        else{
            cout << (total_d > total_s ? "DRAGON\n" : "SLOTH\n");
        }
        
    }

    return 0;
}