#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        string a = "po";
        string b = "desu";
        string c = "masu";
        string d = "mnida";

        int n = s.size();
        int k = 1;
        bool check = false;
        for(int i=n-1; i>=n-2; i--){
            if(s[i] == a[k]){
                check = true;
                k--;
            }
            else 
                check = false;
        }
        if(check){
            cout << "FILIPINO\n";
            continue;
        }

        k = 3;
        for(int i=n-1; i>=n-4; i--){
            if(s[i] == b[k] || s[i] == c[k]){
                check = true;
                k--;
            }
            else 
                check = false;
        }
        if(check){
            cout << "JAPANESE\n";
            continue;
        }

        k = 4;
        for(int i=n-1; i>=n-5; i--){
            if(s[i] == d[k]){
                check = true;
                k--;
            }
            else 
                check = false;
        }
        if(check){
            cout << "KOREAN\n";
            continue;
        }
    }
    return 0;
}