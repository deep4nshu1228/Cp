#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int x = 0;
        for(int i=0; i<n; i++){
            if(s[i] == ')'){
                x -= 1;
                if(x < 0){
                    count++;
                    x=0;
                }
            }
            else{
                x += 1;
            }
        }
        cout << count << "\n";
    }
    return 0;
}