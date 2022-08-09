#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,t;
    cin >> n >> t;

    string s = to_string(t);
    if(t == 10){
        if(n == 1){
            cout << "-1\n";
        }
        else{
            for(int i=1; i<n-1; i++){
                s += '0';
            }
            cout << s << "\n";
        }
    }
    else{
        for(int i=1; i<n; i++){
            s += '0';
        }
        cout << s << "\n";
    }

    return 0;
}