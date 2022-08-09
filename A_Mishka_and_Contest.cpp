// #include <bits/stdc++.h>
// #define all(n) (n).begin(), (n).end()
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ll n,k;
//     cin >> n >> k;

//     vector<int> a(n);
//     for(auto &it: a) cin >> it;

//     int front = 0, rear = n-1;

//     while(a[front] <= k && front < rear){
//         front++;
//     }
//     while(a[rear] <= k && rear > front){
//         rear--;
//     }

//     if(front == rear)
//         cout << n << "\n";
//     else
//         cout << n - (rear + 1 - front) << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	
	int ans = 0;
	while (!a.empty() && a.back() <= k) {
		++ans;
		a.pop_back();
	}
	reverse(a.begin(), a.end());
	while (!a.empty() && a.back() <= k) {
		++ans;
		a.pop_back();
	}
	
	cout << ans << endl;
	
	return 0;
}