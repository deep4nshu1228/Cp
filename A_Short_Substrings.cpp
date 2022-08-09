#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        string b;
        cin >> b;

        string a;
        a.push_back(b[0]);
        for(int i = 1; i < b.length(); i = i + 2){
            a.push_back(b[i]);
        }

        cout << a << "\n";
    }
    return 0;
}