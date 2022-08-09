#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s;
        cin >> s;

        sort(all(s));
        cout << s << "\n";

        
        // int arr[26] = {0};
        // for(int i=0; i<s.size(); i++){
        //     arr[s[i] - 'a']++;
        // }

        // for(int i=0; i<26; i++){
        //     if(arr[i] == 2){
        //         char a = 'a'+ i;
        //         cout << a;
        //     }
        // }
        // for(int i=0; i<26; i++){
        //     if(arr[i] == 1){
        //         char a = 'a'+ i;
        //         cout << a;
        //     }
        // }
        // for(int i=0; i<26; i++){
        //     if(arr[i] == 2){
        //         char a = 'a'+ i;
        //         cout << a;
        //     }
        // }
        // cout << "\n";
    }
    return 0;
}