#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool lowercase(char c){
    if(c > 96 && c < 123) return true;
    return false;
}
int main()
{
    string s;
    cin >> s;
    // int x = 0;
    // for(int i=1; i<s.size(); i++){
    //     if(lowercase(s[i])){
    //         cout << s << "\n";
    //         x = 1;
    //         break;
    //     }
    // }
    // if(x == 0){
    //     if(lowercase(s[0])){
    //         s[0] = s[0] - 32;
    //         for (int i = 1; i < s.size(); i++)
    //         {
    //             s[i] = s[i] + 32;
    //         }
    //         cout << s << endl;
    //     }
    //     else{
    //         for (int i = 0; i < s.size(); i++)
    //         {
    //             s[i] = s[i] + 32;
    //         }
    //         cout << s << endl;
    //     }
    // }

    bool upperCase = true;
    for(int i=1; i<s.size(); i++){
        if(lowercase(s[i])){
            upperCase = false;
        }
    }

    if(upperCase){
        if(lowercase(s[0])){
            s[0] = s[0] - 32;
            for (int i = 1; i < s.size(); i++)
            {
                s[i] = s[i] + 32;
            }
            cout << s << endl;
        }
        else{
            for (int i = 0; i < s.size(); i++)
            {
                s[i] = s[i] + 32;
            }
            cout << s << endl;
        }
    }
    else{
        cout << s << "\n";
    }
    return 0;
}