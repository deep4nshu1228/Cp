#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n,len,i;
    string str;

    while (cin >> n)
    {
        set <set <char>> mySet;

        while (n--)
        {
            cin >> str;
            len = str.size();
            set <char> S;

            for (char x : str)
                S.insert(x);

            mySet.insert(S);
        }

        cout << mySet.size() << endl;

        mySet.clear();
    }
    return;
}
int main()
{
    solve();
    return 0;
}