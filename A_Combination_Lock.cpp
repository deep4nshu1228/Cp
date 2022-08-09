#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    int count = 0;

    for(int i=0; i<n; i++){
        count += min( abs(a[i]-b[i]), 10 - abs(a[i]-b[i]));
    }
    cout << count << "\n";
    return 0;
}