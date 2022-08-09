#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(auto &it: a) cin >> it;

        vector<int> b;

        int front_ptr = 0;
        int rear_ptr = n-1;
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                b.push_back(a[front_ptr]);
                front_ptr++;
            }
            else{
                b.push_back(a[rear_ptr]);
                rear_ptr--;
            }
        }

        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}