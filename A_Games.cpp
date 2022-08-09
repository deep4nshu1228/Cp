#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

struct uniform{
    int a,b;
};

int main()
{
    int n;
    cin >> n;
    struct uniform p[n];
    for(int i = 0; i < n; i++){
        cin >> p[i].a >> p[i].b;
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(p[i].a == p[j].b && i != j){
                count++;
            }
        }
    }

    cout << count << "\n";
    return 0;
}