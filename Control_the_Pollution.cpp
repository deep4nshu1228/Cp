#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int tests; cin >> tests;
    while(tests--){
        int n,x,y;
        cin >> n >> x >> y;

        int buses = (n + 99)/100;
        int cars = (n + 3)/4;

        vector<int> a(buses+2);
        a[0] = buses*x;
        a[1] = cars*y;

        int index = 2;
        for(int i=1; i<=buses; i++){
            if((cars- i*25) >= 0){
                a[index] = i*x + (cars- i*25)*y;
                index++;
            }
            else{
                a[index] = i*x;
                index++;
            }
        }

        cout << *min_element(all(a)) << "\n";
    }
    return 0;
}