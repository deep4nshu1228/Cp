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

        int sz = 2*n;

        bool viz[55] = {false};

        vector<int> a(sz);
        for(auto &it: a) cin >> it;

        for(int i=0; i<a.size(); i++){
            if(!viz[a[i]]){
                cout << a[i] << " ";
                viz[a[i]] = true;
            }  
        }
        cout << "\n";
    }
    return 0;
}