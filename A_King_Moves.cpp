#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

void solve() {
	string s; cin >> s;
	if(s == "a1" || s == "h1" || s == "h8" || s == "a8")
		cout << "3\n";
	else if(s[1]=='1' || s[0]=='a' || s[0]=='h' || s[1]=='8')
		cout << "5\n";
	else
		cout << "8\n";
}
int main()
{
    solve();
    return 0;
}