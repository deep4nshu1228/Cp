#include <iostream>
using namespace std;

int N,D,a[105],ans;

int main(){
  int T; cin>>T;
  while (T--){
    cin>>N>>D;
    for (int i=1;i<=N;i++)
      cin>>a[i];
    for (int i=2;i<=N;i++){
      int move=min(a[i],D/(i-1));
      a[1]+=move;
      D-=move*(i-1);
    }
    cout<<a[1]<<endl;
  }
}