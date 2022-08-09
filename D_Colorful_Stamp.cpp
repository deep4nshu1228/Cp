// Huh one of the toughtest till now :}

#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 1 && s[0] != 'W'){
            cout << "NO\n"; continue;
        }
        if(n == 2 && (s != "WW" && s != "BR" && s != "RB")){
            cout << "NO\n"; continue;
        }

        int cntW = count(all(s), 'W');
        if(cntW == n){
            cout << "YES\n"; continue;
        }
        vector<string> check;
        int i = 0;
        string x = "";
        while(s[i]!='W' && i<n){
            x.push_back(s[i]);
            i++;
        }
        if(x!="")
            check.push_back(x);

        for(i; i<n; i++){
            x = "";
            if(s[i]=='W') i++;
            while(s[i]!='W' && i<n){
                x.push_back(s[i]);
                i++;
            }
            if(x!="")
                check.push_back(x);
        }
        string ans = "YES";
        for(i=0; i<check.size(); i++){
            int cntr = count(all(check[i]),'R');
            int cntb = count(all(check[i]),'B');

            if(cntr == 0 || cntb == 0){
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}