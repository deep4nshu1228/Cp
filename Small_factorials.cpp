#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        
        int a[200];
        a[0] = 1;
        int m = 1;

        for(int i = 1; i <= n; i++){
            
            int temp = 0;
            for(int index = 0; index < m; index++){
                int x = i * a[index] + temp;
                a[index] = x % 10;
                temp = x / 10;
            }

            while(temp > 0){
                a[m++] = temp % 10;
                temp /= 10;
            }
        }
        for(int print = m - 1; print >=0; print--){
            cout << a[print];
        }
        cout << "\n";
    }   

    
    return 0;
}