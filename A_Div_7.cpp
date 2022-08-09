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

        if(n%7 == 0){
            cout << n << endl;
        }
        else{
            int temp = n;
            while(temp%7 != 0){
                temp++;
            }
            if(temp%10 < n%10){
                n = temp - 7;
            }
            else{
                n = temp;
            }
            cout << n << endl;
        }
    }
    return 0;
}