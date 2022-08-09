// #include <bits/stdc++.h>
// #define all(n) (n).begin(), (n).end()
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int tests; cin >> tests;
//     while(tests--){
//         string s; cin >> s;  
//         string t; cin >> t;

//         sort(all(s));

//         int cnt_index_0 = count(all(s),t[0]);
//         int cnt_index_1 = count(all(s),t[1]);
//         int cnt_index_2 = count(all(s),t[2]);
//         if(t[0] != 'a' || cnt_index_0 == 0 || cnt_index_1 == 0 || cnt_index_2 == 0){
//             cout << s << "\n";
//         }
//         else{
//             string ans;
//             for(int i=0; i<cnt_index_0; i++){
//                 ans.push_back('a');
//             }
//             if(t[1] == 'b'){
//                 for(int i=0;i<cnt_index_2; i++){
//                     ans.push_back('c');
//                 }
//                 for(int i=0; i<cnt_index_1; i++){
//                     ans.push_back('b');
//                 }
//                 int ind = cnt_index_0 + cnt_index_1 + cnt_index_2 ;
//                 for(int i=ind; i<s.size(); i++){
//                     ans.push_back(s[i]);
//                 }
//             }
//             else{
//                 for(int i=0;i<cnt_index_2; i++){
//                     ans.push_back('b');
//                 }
//                 for(int i=0; i<cnt_index_1; i++){
//                     ans.push_back('c');
//                 }
//                 int ind = cnt_index_0 + cnt_index_1 + cnt_index_2 ;
//                 for(int i=ind; i<s.size(); i++){
//                     ans.push_back(s[i]);
//                 }
//             }

//             cout << ans << "\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        string s; cin >> s;
        string t; cin >> t;

        sort(all(s));
        vector<int> cnt(26,0);
        for(auto &x: s) cnt[x - 'a']++;

        if(t != "abc" || !cnt[0] || !cnt[1] || !cnt[2]){
            cout << s << "\n";
        }
        else{
            while(cnt[0]--) cout << 'a';
            while(cnt[2]--) cout << 'c';
            while(cnt[1]--) cout << 'b';

            for(int i=3; i<26; i++){
                while(cnt[i]--) cout << char('a' + i);
            }
            cout << "\n";
        }
    }
    return 0;
}