#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,a,b;
        cin >> n >> a >> b;

        vector<int> x;

        x.push_back(a);

        int k = n;
        for(int i=n; i>0; i--){
            if(i != a && i != b){
                x.push_back(i);
            }
        }
        x.push_back(b);

        bool ans_exists = true;
        for(int i=0; i<n/2; i++){
            if(x[i] < a){
                ans_exists = false;
                break;
            }
        }
        if(ans_exists){
            for(int i=n/2; i<n; i++){
                if(x[i] > b){
                    ans_exists = false;
                    break;
                }
            }
        }


        if(ans_exists){
            for(int i=0; i<n; i++){
                cout << x[i] << " ";
            }
            cout << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}