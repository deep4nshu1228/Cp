#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    int sum_a=0, sum_b=0;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        sum_a += it;
    }
    vector<int> b(n);
    for(auto &it: b){
        cin >> it;
        sum_b += it;
    }

    if(sum_a >= sum_b)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}