#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        int even = 0;
        int odd = 0;
        int sum = 0;

        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i]%2 == 0) even++;
            else odd++;
        }

        if(sum % 2 != 0){
            cout << "YES\n";
        }
        else{
            if(even > 0 && odd > 0 ){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}