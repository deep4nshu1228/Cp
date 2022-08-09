#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        int one = count(all(s), '1');
        int zero = count (all(s), '0');

        if(s.size() < 3 || one == 0 || zero == 0){
            cout << 0 << "\n";
        }
        else if(min(one,zero) != max(one,zero)){
            cout << min(one,zero) << "\n";

        }
        else{
            if(s[0] == '1'){
                cout << one - 1 << endl;
            }
            else{
                cout << zero - 1 << "\n";
            }
        }
    }
    return 0;
}