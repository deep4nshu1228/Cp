#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,b,d;
    cin >> n >> b >> d;

    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int total_juice = 0;
    int total_waste = 0;

    int waste_threw = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= b) total_juice += a[i];
        if(total_juice > d){
            waste_threw++;
            total_juice = 0;
        }
    }

    cout << waste_threw << "\n";
    return 0;
}