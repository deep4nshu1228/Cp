#include <stdio.h>
 
int min(int a, int b){ return a < b ? a : b; }
int abs(int x){ return x < 0 ? -x : x; }
 
int main(){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int res = 1e9;
    for(int i=1; i<=n; i++){
        int a;
        scanf("%d", &a);
        if(a != 0 && a <= k) res = min(res, abs(i-m));
    }
    printf("%d", 10*res);
    return 0;
}