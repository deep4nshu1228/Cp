#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        int n = s.size();
        vector<int> freq(26);
        for(int i=0; i<n; i++){
            freq[(int)s[i] - 97]++;
        }
        int index = 0;
        for(int i=0; i<n; i++){
            if(freq[(int)s[i] - 97] > 1){
                freq[(int)s[i] - 97]--;
            }
            else if(freq[(int)s[i] - 97] == 1){
                index = i;
                break;
            }
        }

        for(int i=index; i<n; i++){
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}