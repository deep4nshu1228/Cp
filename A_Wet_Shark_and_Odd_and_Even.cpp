#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[100001], pas;
int main() {
    int n,index = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            pas += arr[i];
        } else {
            if (index == -1) {
                index = i;
            } else {
                pas += arr[index] + arr[i];
                index = -1;
            }
        }
    }
    cout << pas;
}