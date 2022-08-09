#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    int max,min,count = 0;
    int x;
    cin >> x;
    max = x;
    min = x;
    t--;
    while(t--){
        int y;
        cin >> y;
        if(y < min) { min = y; count++; }
        if(y > max) { max = y; count++; }
    }

    cout << count << "\n";
    return 0;
}