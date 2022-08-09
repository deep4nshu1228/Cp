#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,d;
    cin >> n >> d;

    int sum = 0;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
        sum += it;
    }

    if(((n-1)*10)+sum > d){
        cout << "-1\n";
    }
    else{
        cout << (d-sum)/5 << "\n";
    }
    return 0;
}