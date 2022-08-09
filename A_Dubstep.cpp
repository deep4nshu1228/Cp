#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        int y;
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i = i + 2;
            count++;
            if(count == 1){
                cout << " ";
            }
        }
        else { 
            count = 0;
            cout << s[i];
        }
    }

    return 0;
}