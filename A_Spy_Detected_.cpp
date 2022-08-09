#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &it: a) cin >> it;
        // map<int,int> m;
        // for(int i=0; i<n; i++){
        //     m[a[i]]++;
        // }
        // int value;
        // if(m[a[0]] != 1){
        //     for(int i = 0; i < n; i++){
        //         if(a[i] != a[0]){
        //             cout << i+1 << "\n";
        //             break;
        //         }
        //     }
        // }
        // else{
        //     cout << "1\n";
        // }

        /* 
        * We can make an another vector and sort it 
        * after sorting the unique element will be at 0th index or last >=3
        * so a[1] always be element which is not unique
        */
        vector<int> b = a;
        sort(all(b));
        for(int i=0; i<n; i++){
            if(a[i] != b[1]){
                cout << i+1 << "\n";
            }
        }
    }
    return 0;
}