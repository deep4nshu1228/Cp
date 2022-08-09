#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
bool checkforSubsequence(string S,string target)
{
    stack<char> s;
    for (int i = 0; i < target.size(); i++) {
        s.push(target[i]);
    }

    for (int i = (int)S.size() - 1; i >= 0; i--) {

        if (s.empty()) {
            return true;
        }

        if (S[i] == s.top()) {
            s.pop();
        }
    }

    if (s.empty())
        return true;
    else
        return false;
}

int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,m; cin >> n >> m;
        string s,a;
        cin >> s >> a;

        if(checkforSubsequence(s,a)){
            cout << "-1\n";
        }
        else{
            int j = m-1;
            if(a[m-1] == 'a'){
                for(int i=0; i<n; i++){
                    if(s[i] == '?'){
                        s[i] = a[j];
                        j--;
                    }
                }
            }
            else{
                for(int i=0; i<n; i++){
                    if(s[i] == '?'){
                        s[i] = a[j];
                        j--;
                    }
                }
            }

            cout << s << "\n";
        }
    }
    return 0;
}