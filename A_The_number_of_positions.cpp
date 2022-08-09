#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int ans;
    if(a >= n-b){
        ans = n-a;
    }
    else{
        // ans = n-(n-b-1);
        ans = b+1;
    }
    cout << ans << "\n";
    return 0;
}