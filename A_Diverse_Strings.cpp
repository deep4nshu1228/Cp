#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main() {
    int n;
    cin >> n;
    forn(i, n) {
        string s;
        cin >> s;
        if (set<char>(s.begin(), s.end()).size() == s.length()
                && *max_element(s.begin(), s.end()) == char(*min_element(s.begin(), s.end()) + (s.length() - 1)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}