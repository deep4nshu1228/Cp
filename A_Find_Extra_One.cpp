#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;

    int x,y;
    int left=0,right=0;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(x < 0)
            left++;
        else
            right++;
    }

    if(left <= 1 || right <= 1)
        cout << "Yes\n";
    else    
        cout << "No\n";
}
int main()
{
    solve();
    return 0;
}