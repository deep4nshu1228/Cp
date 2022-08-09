#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;

int main()
{
    int a,b;
	cin>>a>>b;
	if(abs(a-b)%2!=0){
		cout<<((abs(a-b)/2)+1)*((abs(a-b)/2)+1);
	}
	else{
		cout<<(abs(a-b)/2)*((abs(a-b)/2)+1);
	}
    return 0;
}