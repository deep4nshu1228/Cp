#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        bool check = (s.back() == 'B');

        int sum = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A')
                sum++;
            else
                sum--;
            if(sum < 0) check = false;
        }

        if(check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}