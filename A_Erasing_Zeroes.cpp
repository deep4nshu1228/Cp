#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;

        int last_one_index = -1;
        int first_one_index = -1;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                first_one_index = i;
                break;
            }
        }
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '1'){
                last_one_index = i;
                break;
            }
        }

        // if(first_one_index == last_one_index){
        //     cout << "0\n";
        //     continue;
        // }

        // int ones = 2;
        // for(int i = first_one_index+1; i<last_one_index; i++){
        //     if(s[i] == '1') ones++;
        // }

        // cout << ((last_one_index + 1) - first_one_index) - ones << "\n";

        int zeros = 0;
        for(int i = first_one_index+1; i<last_one_index; i++){
            if(s[i] == '0') zeros++;
        }
        cout << zeros << "\n";

    }
    return 0;
}