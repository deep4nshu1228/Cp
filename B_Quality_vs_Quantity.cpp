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

        sort(all(a));

        ll sum_blue = a[0];
        ll sum_red = 0;

        int index_front = 1, index_rear = n-1;

        while(index_front < index_rear){
            sum_blue += a[index_front];
            index_front++;

            sum_red += a[index_rear];
            index_rear--;

            if(sum_red > sum_blue) break;
        }

        if(sum_red > sum_blue){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}