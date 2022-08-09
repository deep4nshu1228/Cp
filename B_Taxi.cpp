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

    int one = count(all(a), 1);
    int two = count(all(a), 2);
    int three = count(all(a), 3);
    int four = n - (one + two + three);

    int cnt = 0;
    cnt += one/4;
    one -= 4*cnt;
    
    cnt += min(two,one/2);
    two -= min(two,one/2);
    one -= 2*min(two,one/2);

    cnt += two/2;
    two = two%2;
    
    if(two == 1 && one == 1){
        cnt++;
        two--; one--;
    }

    cnt += min(one,three);
    one -= min(one,three);
    three -= min(one,three);

    cnt += four;
    cnt += three;
    cnt += two;
    cnt += one;

    cout << cnt << "\n";
    return 0;
}