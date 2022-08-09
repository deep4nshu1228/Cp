#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;

    int x = n/2;
    for(int i=1; i<=n/2+1; i++){
        for(int j=1; j<=n/2-i+1; j++)
            cout << "*";
        for(int j=1; j<=2*i-1; j++)
            cout << "D";
        for(int j=1; j<=n/2-i+1; j++)
            cout << "*";
        cout << "\n";
    }

    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=i; j++)
            cout << "*";
        for(int j=1; j<=n-i*2; j++)
            cout << "D";
        for(int j=1; j<=i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}