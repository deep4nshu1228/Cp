#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        if(n%3==0){
            cout << n/3 << " " << n/3 << "\n";
        }
        else{
            if(n%3 == 1){
                cout << n/3 + 1 << " " << n/3 << "\n";
            }
            else{
                cout << n/3 << " " << n/3 + 1<< "\n";
            }
        }
    }
    return 0;
}