#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }

    int max = *max_element(all(a));
    int max_index;
    int count = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == max){
            max_index = i;
            break;
        }
    }
    for(int i = max_index; i > 0; i--){
        swap(a[i], a[i-1]);
        count++;
    }

    int min = *min_element(all(a));
    int min_index;
    for(int i = a.size() - 1; i >= 0; i--){
        if(a[i] == min){
            min_index = i;
            break;
        }
    }
    for(int i = min_index; i < a.size() - 1; i++){
        swap(a[i], a[i+1]);
        count++;
    }
    cout << count << "\n";
    return 0;
}