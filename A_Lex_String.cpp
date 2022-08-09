#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,m,k;
    cin >> n >> m >> k;

    string a; cin >> a;
    string b; cin >> b;

    sort(all(a));
    sort(all(b));
    cout << a << "\n" << b << "\n";
    string c = "";
    int temp = k;
    int x = 0, y = 0;
    // while(x)
    for(int i=0; i<min(n,m); i++){
        if(a[x] < b[y]){
            while(a[x] < b[y] && temp && x<n){
                c.push_back(a[x]);
                x++;
                i++;
                temp--;
            }
        }
        else if(a[x] > b[y]){
            while(b[y] < a[x] && temp && y<m){
                c.push_back(b[y]);
                y++;
                i++;
                temp--;
            }
        }
        i--;
        temp=k;
    }
    cout << c << "\n";
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}