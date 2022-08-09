#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    int i,j,k;
	int n,m;

	cin >> (n);

	m=0;
	for(i=0;i<n;i++)
        cin >> (k), m=max(m,k);

    if(m<=25)
        cout << ("0");

    else
        cout << (m-25);

    return 0;
}