#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    int mi = 0;
    int ch = 0;
    while(t--){
        int m,c;
        cin >> m >> c;
        if(m>c){ mi++;}
        if(m<c){ ch++;}
    }
    if(mi == ch){
        cout << "Friendship is magic!^^\n";
    }
    else if(mi < ch){
        cout << "Chris\n";
    }
    else{
        cout << "Mishka\n";
    }
    return 0;
}