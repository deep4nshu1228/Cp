#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
	cin >> n;
	int cnto = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnto += x & 1;
	}
	
	cout << min(cnto, n - cnto) << endl;
    return 0;
}