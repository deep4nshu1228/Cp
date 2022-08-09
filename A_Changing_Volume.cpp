#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int a,b;
        cin >> a >> b;

        if(a == b){
            cout << "0\n";
        } 
        else if(a > b){
            int x = a-b;
            if(x%5 == 0){
                cout << x/5 << "\n";
            }
            else if(x%5 > 2){
                cout << x/5 + 2 << "\n";
            }
            else{
                cout << x/5 + 1 << "\n";
            }
        }
        else{
            int x = b-a;
            if(x%5 == 0){
                cout << x/5 << "\n";
            }
            else if(x%5 > 2){
                cout << x/5 + 2 << "\n";
            }
            else{
                cout << x/5 + 1 << "\n";
            }
        }
    }
    return 0;
}