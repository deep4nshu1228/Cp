#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    
    int count = 0;
    for(int i = 1; i <= d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}