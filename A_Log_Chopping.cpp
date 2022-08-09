#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i]-1;
        }
        
        if(sum&1)
            cout << "errorgorn\n";
        else
            cout << "maomao90\n";
    }
    return 0;
}