#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,k; cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            a[i]++;
        }

        if(n == 1){
            cout << 1 << "\n";
            continue;
        }
        
        cout << 2 << " ";
        a[1]--;
        for(int i=1; i<k; i++){
            cout << 2*(i+1) << " ";
            a[2*(i+1) - 1]--;
        }
        for(int i=0; i<n; i++){
            if(a[i] > 0){
                cout << i+1 << " "; 
            }
        }
        cout << "\n";
    }
    return 0;
}