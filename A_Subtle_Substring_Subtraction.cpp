#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        int a[27];
        for(int i=0; i<27; i++){
            a[i] = i;
        }

        int alice = 0, bob = 0;
        int n = s.size();
        if(n%2 == 0){
            for(int i=0; i<n; i++){
                alice += a[(int)s[i] - 96];
            }
            cout << "Alice " << alice << "\n";
        }
        else{
            int total = 0;
            for(int i=0; i<n; i++){
                total += a[(int)s[i] - 96];
            }
            if(s[0] < s[n-1])
                bob = a[(int)s[0] - 96];
            else
                bob = a[(int)s[n-1] - 96];
            
            if(total == bob){
                cout << "Bob " << bob << "\n";
                continue;
            }
            alice = total - bob;    
            cout << "Alice " << alice-bob << "\n";
        }
    }
    return 0;
}