#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    int arr[4] = {8,4,2,6};
    if(n == 0) cout << "1\n";
    else if(n%4 == 0) cout << arr[3] << "\n";
    else cout << arr[n%4 - 1] << "\n";
    return 0;
}