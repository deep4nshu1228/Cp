#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int sum(int x){
    int s = 0;
    while(x > 0){
        s += x%10;
        x /= 10;
    }
    return s;
}
int main()
{
    int n; cin >> n;

    while(sum(n)%4 != 0){
        n++;
    }
    cout << n << "\n";

    return 0;
}