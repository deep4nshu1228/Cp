#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int matrix[5][5];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>matrix[i-1][j-1];
        }
    }
    int x=0,y=0;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(matrix[i-1][j-1] == 1){
                x=i;
                y=j;
                break;
            }
            if(x>0){break;}
        }
    }
    int ans = abs(x-3) + abs(y-3);
    cout<<ans<<"\n";
    return 0;
}