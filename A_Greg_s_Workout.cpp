#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int chest = 0;
    int biceps = 0;
    int back = 0;
    for(int i=0; i<n; i++){
        if(i%3 == 0){
            chest += a[i];
        }
        else if(i%3 == 1){
            biceps += a[i];
        }
        else{
            back += a[i];
        }
    }

    if(chest > biceps && chest > back){
        cout << "chest\n";
    }
    else if(biceps > chest && biceps > back){
        cout << "biceps\n";
    }
    else{
        cout << "back\n";
    }
    return 0;
}