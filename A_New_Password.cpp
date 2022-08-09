#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    cin >> n >> m;

    int x = (n+m-1)/m;
    while(x--){
        for(char i='a'; i<'a'+m; i++){
            if(n)
                cout << i;
            else
                break;
            n--;
        }
    }
    cout << "\n";
    return 0;
}