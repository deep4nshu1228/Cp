#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    int i=0;
    while(i < s.size()){
        if(s[i] == '-' && i < s.size()-1){
            if(s[i+1] == '.'){
                cout << 1;
                i+=2;
            }
            else{
                cout << 2;
                i+=2;
            }
        }
        else{
            cout << 0;
            i++;
        }
    }
    cout << endl;
    return 0;
}