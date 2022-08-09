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

        // int c;
        // if(n >= 1){
        //     cout << "2 ";
        // }
        // int i = 3;
        // for(int count=2; count<=n; i++){
        //     for(c=2; c<i; c++){
        //         if(i%c == 0) break;
        //     }
        //     if(c == i){
        //         cout << i << " ";
        //         count++;
        //     }
        // }
        // cout << "\n";

        for(int i=2; i<n+2; i++){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}