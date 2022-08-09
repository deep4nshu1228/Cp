#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
        int n; cin >> n; 

        for(int i=0; i<n; i++){
            int x; cin >> x;
            cout << x- !(x%2) << " ";
        }
        cout << "\n";

    return 0;
}