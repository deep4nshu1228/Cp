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
        cout << n << " ";
        for(int i=1; i<n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}