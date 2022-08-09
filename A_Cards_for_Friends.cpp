#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int a,b,n;
        cin >> a >> b >> n;

        int papers = 1;
        while(a%2 == 0){
            a = a/2;
            papers *= 2;
        }
        while(b%2 == 0){
            b = b/2;
            papers *= 2;
        }

        // if(papers >= n){
        //     cout << "YES\n";
        // }
        // else{
        //     cout << "NO\n";
        // }
        
        cout << (papers >= n ? "YES\n" : "NO\n");
    }
    return 0;
}