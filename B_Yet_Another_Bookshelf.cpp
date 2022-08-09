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

        int first_one = -1;
        int last_one = -1;

        for (int i = 0; i < n; i++)
        {
            if(a[i] == 1){
                first_one = i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i] == 1){
                last_one = i;
                break;
            }
        }
        
        int count = 0;
        for(int i = first_one + 1; i < last_one; i++){
            if(a[i] == 0) count++;
        }
        cout << count << "\n";
        
    }
    return 0;
}