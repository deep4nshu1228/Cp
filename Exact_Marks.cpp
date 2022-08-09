#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int q,m;
        cin >> q >> m;
        
        bool ans = true;
        int right  = 0;
        int wrong = 0;
        int unattempted = 0;

        if(m > 3*q){
            cout << "NO\n";
            continue;
        }

        if(m%3 == 0){
            right = m/3;
            unattempted = q - m/3;
        }
        else if((m+1)%3 == 0){
            right = (m+1)/3;
            wrong = 1;
            unattempted = q - (right + wrong);

            if(right + wrong > q) ans = false;
        }
        else if((m+2)%3 == 0){
            right = (m+2)/3;
            wrong = 2;
            unattempted = q - (right + wrong);

            if(right + wrong > q) ans = false;
        }

        if(ans){
            cout << "YES\n"
                << right << " " << wrong << " " << unattempted << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}