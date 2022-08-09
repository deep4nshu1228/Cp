#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    sort(all(a));
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}