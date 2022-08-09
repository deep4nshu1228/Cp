#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    vector<int> a(4);
    for(int i=0; i<4; i++){
        cin >> a[i];
    }
    
    sort(all(a));
    int sum = a[0] + a[1] + a[2] + a[3];
    
    if(a[3] == sum - a[3] || a[3]+a[0] == a[1]+a[2]){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}