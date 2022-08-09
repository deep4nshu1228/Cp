#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin>>t;
    vector<int> a;
    for(int i=0; i<t; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != a[i+1]) { count++; }
    }
    cout << count << "\n";
    return 0;
}