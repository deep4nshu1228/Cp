#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;

    int a[n+2];
    for(int index = 0; index <= n; index++){
        a[index] = 0;
    }

    int p; cin >> p;
    int ap[p];
    for(int i = 0; i < p; i++){
        cin >> ap[i];
        a[ap[i]]++;
    }
    int q; cin >> q;
    int aq[q];
    for(int j = 0; j < q; j++){
        cin >> aq[j];
        a[aq[j]]++;
    }

    string ans = "I become the guy.";
    for(int k = 1; k <= n+1; k++){
        if(a[k] == 0){ ans = "Oh, my keyboard!"; break; }
    }
    cout << ans << "\n";
    
    return 0;
}