#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int a[105];

int main()
{
    int n, m, i, div, mod;
    while(scanf("%d%d", &n, &m)==2)
    {
        div = (n/m);
        mod = (n%m);
        for(i=1; i<=m; i++)
        {
            a[i] = div;
            if(mod>0)
            {
                a[i]=div+1;
                mod--;
            }
        }
        for(i=1; i<=m ;i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}