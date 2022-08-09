#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    set<int> a;
    int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		a.insert(x);
	}

    if((n-a.size())%2 == 0)
	{
		cout << a.size() << endl;
	}
	else
	{
		cout << a.size()-1 << endl;
	}
}
int main()
{
    int tests; cin >> tests;
    while(tests--) solve();
    return 0;
}