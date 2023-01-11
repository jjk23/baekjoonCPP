#include <iostream>
#include <algorithm>
using namespace std;
int n, m, arr1[500000], arr2[500000], cnt[500000];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    for (int i = 0; i < m; i++)
    {
        cout << binary_search(arr1, arr1 + n, arr2[i])<<" ";
    }
}