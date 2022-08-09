#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
int x, y, z, a, b, c;
 
void Input() {
	cin >> x >> y >> z;
	cin >> a >> b >> c;
}
 
void Solve() {
	if (x > a) {cout << "NO\n"; return;}
	if (x + y > a + b) {cout << "NO\n"; return;}
	if (x + y + z > a + b + c) {cout << "NO\n"; return;}
	cout << "YES\n";
}
 
int main(int argc, char* argv[]) {
	Input(); Solve();
	return 0;
}