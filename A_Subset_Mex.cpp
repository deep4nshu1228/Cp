// #include <bits/stdc++.h>
// #define all(n) (n).begin(), (n).end()
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int tests; cin >> tests;
//     while(tests--){
//         int n; cin >> n;
//         vector<int> a(n);
//         for(auto &it: a) cin >> it;

//         int m = *max_element(all(a));
//         int vis[2][102];
//         int x[m+2];
//         for(int i=1;i<=n;++i){
// 		    if(!vis[0][a[i]])vis[0][a[i]]=1;
// 		    else vis[1][a[i]]=1;
// 	    }ansa=ansb=0;
// 	while(vis[0][ansa])++ansa;
// 	while(vis[1][ansb])++ansb;
// 	printf
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define re register
using namespace std;
inline int read(){
	re int t=0;re char v=getchar();
	while(v<'0')v=getchar();
	while(v>='0')t=(t<<3)+(t<<1)+v-48,v=getchar();
	return t;
}
int n,a[102],vis[2][102],ansa,ansb;
int main(){
	re int t=read();
	while(t--){
	n=read();
	for(re int i=1;i<=n;++i)a[i]=read();memset(vis,0,sizeof(vis));
	for(re int i=1;i<=n;++i){
		if(!vis[0][a[i]])vis[0][a[i]]=1;
		else vis[1][a[i]]=1;
	}ansa=ansb=0;
	while(vis[0][ansa])++ansa;
	while(vis[1][ansb])++ansb;
	printf("%d\n",ansa+ansb);
	}
}