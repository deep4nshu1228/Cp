#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    while(t--){
        int t1,t2,r1,r2;
        cin >> t1 >> t2 >> r1 >> r2;
        double a = (double)t1;
        double b = (double)t2;
        double x = (double)r1;
        double y = (double)r2;
        
        double t = (a*a) / (x*x*x);
        double r = (b*b) / (y*y*y);

        if(t == r){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}