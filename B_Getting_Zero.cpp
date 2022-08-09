#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int M = 32768;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    for(int i=0; i<n; i++){
        int one = M - a[i];
        int two = 0;
        while(a[i]%M != 0 && two <= one){
            two++;
            a[i] = (a[i]*2)%M;
        }

        int ans = min(one, two);
        for(int j=1; j<=one; j++){
            int num = a[i];
            int x = j;
            num += x;
            int y = 0;
            while(num%M != 0 && y+x <= ans){
                num = (num*2)%M;
                y++;
            }

            ans = min(ans, x+y);
        }

        cout << ans << " ";
    }
    cout << "\n";

    return 0;
}