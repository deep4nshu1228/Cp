#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    // for(int i = 2; i < n; i++){
    //     if(!isPrime(i) && !isPrime(n-i)){
    //         cout << i << " " << (n-i) << "\n";
    //         break;
    //     }
    // }

    /*
    *   for odd no 9,n-9
    *   for even no 8,n-8
    */
    if (n%2 != 0){
        cout << "9 " << n-9;
    }
    else{
        cout << "8 "<< n-8;
    }
    return 0;
}