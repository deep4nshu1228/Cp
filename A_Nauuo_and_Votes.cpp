// #include <iostream>
// using namespace std;

// const char result[4] = {'+', '-', '0', '?'};

// int solve(int x, int y)
// {
// 	return x == y ? 2 : x < y;
// }

// int main()
// {
// 	int x, y, z;
	
// 	cin >> x >> y >> z;
	
// 	cout << result[solve(x + z, y) == solve(x, y + z) ? solve(x, y) : 3];
	
// 	return 0;
// }

#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
void solve(){
    int x,y,z;
    cin >> x >> y >> z;

    if(x+z > y && x > y+z)
        cout << "+\n";
    else if(y > x+z && y+z > x)
        cout << "-\n";
    else if(x == y+z && x+z == y)
        cout << "0\n";
    else    
        cout << "?\n";
}
int main()
{
    solve();
    return 0;
}