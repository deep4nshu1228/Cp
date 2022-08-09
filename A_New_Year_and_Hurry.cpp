#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n,k;
    cin >> n >> k;
    
    int diff = 240 - k;
    vector<int> a;

    int sum =  0;
    for(int i = 1; i <= n; i++){
        int x = 5*i;
        sum += x;

        if(sum <= diff){
            a.push_back(sum);
        }
        else{
            break;
        }
    }

    cout << a.size() << "\n";
    return 0;
}