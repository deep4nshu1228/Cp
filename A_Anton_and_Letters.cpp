#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    getline(cin, s);
    int a[26];
    for(int i = 0; i < 26; i++){
        a[i] = 0;
    }
    for(int i = 0; i < s.length(); i++){
        if((int)s[i] > 96 && (int)s[i] < 123){
            a[(int)s[i] - 97]++;
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        if(a[i] > 0) { count++; }
    }

    cout << count << "\n";
    return 0;
}