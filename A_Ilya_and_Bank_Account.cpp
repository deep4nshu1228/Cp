#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    // string s;
    // cin >> s;

    // if(s[0] == '-'){
    //     int k;
    //     if(s.length() == 3 && min(s[1],s[2]) == '0'){
    //         cout << 0 << "\n";
    //     }
    //     else{
    //         for(int i =0; i<s.length()-2; i++){
    //             cout << s[i];
    //         }
    //         cout << min(s[s.size()-1], s[s.size()-2]) << "\n";
    //     }
    // }
    // else{
    //     cout << s << "\n";
    // }

    int n;
    cin >> n;

    int Max = n;
    if(n/10 > Max) { Max = n/10; }
    if(n%10 + (n/100)*10 > Max) { Max = n%10 + (n/100)*10;}
    cout << Max << "\n";
}