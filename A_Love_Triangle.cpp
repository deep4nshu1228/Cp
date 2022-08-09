#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    int a[5001];
    
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    string ans = "NO";
    for(int i=1; i<=n; i++){
        if(a[a[a[i]]] == i){
            ans = "YES";
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}