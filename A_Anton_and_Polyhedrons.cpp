#include <bits/stdc++.h>
#define all(n) (n).begin(), (n).end()
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >> t;
    int count = 0;
    // while(t--){
    //     string s; cin >> s;
    //     if(s == "Icosahedron"){
    //         count = count + 20;
    //     }
    //     if(s == "Cube"){
    //         count= count + 6;
    //     }
    //     if(s == "Tetrahedron"){
    //         count = count + 4;
    //     }
    //     if(s == "Dodecahedron"){
    //         count = count + 12;
    //     }
    //     if(s == "Octahedron"){
    //         count = count + 8;
    //     }
    // }

    /*
    *  USING MAP
    */
    map<string,int> m;
    m["Icosahedron"] = 20;
    m["Cube"] = 6;
    m["Tetrahedron"] = 4;
    m["Dodecahedron"] = 12;
    m["Octahedron"] = 8;

    for(int i = 0; i < t; i++){
        string s; cin >> s;
        count = count + m[s];
    }
    cout << count << "\n";
    return 0;
}