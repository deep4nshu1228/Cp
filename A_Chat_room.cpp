#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    string a = "hello";

    int k = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == a[k]){
            k++;
        }
    }

    if(k >= 5){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}