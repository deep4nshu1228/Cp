#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int bal = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '0')
            bal+=1;
        else
            bal-=1;
    }

    if(bal!=0)
        cout << 1 << "\n" << s << "\n";
    else{
        cout << 2 << "\n";
        for(int i=0; i<n-1; i++){
            cout << s[i];
        }
        cout << " " << s[n-1] << "\n";
    }

    return 0;
}