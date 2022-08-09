#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int len_x = 0;
    int to_delete = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'x'){
            while(s[i] == 'x'){
                len_x ++;
                if(len_x > 2) to_delete++;
                i++;
            }
            i--;
            len_x = 0;
        }
    }

    cout << to_delete << "\n";
    return 0;
}