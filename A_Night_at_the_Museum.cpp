#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    cin >> s;

    int sum = min( (int)(abs(s[0] - 'a')), (int)(26 - abs(s[0] - 'a')) );
    for(int i=0; i<s.length()-1; i++){
        sum += min( (int)(abs(s[i] - s[i+1])), (int)(26 - abs(s[i] - s[i+1])) );
    }

    cout << sum << "\n";
    return 0;
}