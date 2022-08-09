#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        ll n,d;
        cin >> n >> d;

        ll infected = 1;
        for(int i = 1; i <= d; i++){
            if(i<=10){
                infected = infected * 2;
            }
            else{
                infected = infected * 3;
            }
            if(infected >= n){
                break;
            }
        }

        if(infected >= n){
            cout << n << "\n";
        }
        else{
            cout << infected << "\n";
        }
    }
    return 0;
}