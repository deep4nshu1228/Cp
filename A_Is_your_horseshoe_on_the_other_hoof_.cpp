#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    vector<int> s;
    for(int i=0; i<4; i++){
        int x; cin >> x;
        s.push_back(x);
    }

    sort(all(s));
    int count = 0;
    for(int i=0; i<3; i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}