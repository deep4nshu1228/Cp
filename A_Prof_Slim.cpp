#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        int cnt_neg = 0;
        for(int i=0; i<n; i++){
            if(a[i]<0){
                cnt_neg++;
            }
        }

        int k = 0;
        while(cnt_neg){
            if(a[k]>0)
                a[k] = -1*a[k];
            k++;
            cnt_neg--;
        }
        for(int i=k; i<n; i++){
            if(a[i]<0)
                a[i] = -1*a[i];
        }

        bool check_sort = true;
        for(int i=1; i<n; i++){
            if(a[i] < a[i-1])
                check_sort = false;
        }
        if(check_sort)
            cout << "YES\n";
        else    
            cout << "NO\n";
    }
    return 0;
}