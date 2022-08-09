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

        vector<int> a(n);
        for(auto &it: a) cin >> it;

        sort(all(a));
        int min = INT_MAX;
        for(int i=0; i<a.size()-1; i++){
            if(min > (a[i+1] - a[i])){
                min = a[i+1] - a[i];
            }
        }

        cout << min << "\n";
    }
    return 0;
}