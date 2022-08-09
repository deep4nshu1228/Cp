#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int a=0,b=0;
    for(int i=0; i<n-1; i++){
        if(s[i] == 'S' && s[i+1] == 'F')
            a++;
        else if(s[i] == 'F' && s[i+1] == 'S')
            b++;
    }

    if(a > b)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}