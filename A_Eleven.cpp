#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n; cin >> n;

    vector<int> fibonacci;
    fibonacci.push_back(1);
    fibonacci.push_back(2);
    int i = 1;
    while(fibonacci[i]+fibonacci[i-1] <= n){
        fibonacci.push_back(fibonacci[i]+fibonacci[i-1]);
        i++;
    }

    int k = 0;
    for(int i=1; i<=n; i++){
        if(fibonacci[k] == i){
            cout << "O";
            k++;
        }
        else{
            cout << "o";
        }
    }
    cout << "\n";
    return 0;
}