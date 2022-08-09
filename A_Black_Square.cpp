#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // string s;
    // cin >> s;

    // int sum = 0;
    // for(int i=0; i<s.length(); i++){
    //     if(s[i] == '1') sum += a;
    //     else if(s[i] == '2') sum += b;
    //     else if(s[i] == '3') sum += c;
    //     else sum += d;
    // }
    // cout << sum << "\n";

    int a[5];
    for(int i=1; i<5; i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    int sum = 0;

    for(int i=0; i < s.size(); i++){
        sum += a[s[i] - '0'];
    }

    cout << sum << "\n";
    return 0;
}