#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,x;
        cin >> n >> x;

        int total_student = 2*n;
        if(x<=n){
            cout << (total_student + 1) - x << "\n";
        }
        else{
            cout << (n+1) - (x - n) << "\n";
        }
    }
    return 0;
}