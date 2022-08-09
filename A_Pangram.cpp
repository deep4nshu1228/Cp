#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int a[26];
    for(int i = 0; i < 26; i++){
        a[i] = 0;
    }
    if(n<26){
        cout << "NO\n";
    }
    else {
        for(int i = 0; i < s.length(); i++){
            if((int)s[i] > 96){
                a[(int)s[i] - 97]++;
            }
            else{
                a[(int)s[i] - 65]++;
            }
        }

        int min = a[0];
        for(int j = 1; j < 26; j++){
            if(a[j] < min){ min = a[j]; }
        }

        if(min > 0) { cout << "YES\n"; }
        else { cout << "NO\n"; }
    }
    return 0;
}