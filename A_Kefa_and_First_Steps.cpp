#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;
    int count = 1;
    int m = INT_MIN;
    for(int i=1; i<a.size(); i++){
        if(a[i] >= a[i-1]){
            count++;
        }
        else{
            m = max(m,count);
            count = 1;
        }
    }
    m = max(m,count);
    cout << m << endl;
    return 0;
}