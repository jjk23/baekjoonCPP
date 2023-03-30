#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int arr[11];
int cnt = 0;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i > 0; i--)
    {
        if (arr[i] <= k)
        {
            int t = (k / arr[i]);
            cnt += t;
            k -= arr[i] * t;
        }
    }
    cout << cnt;
}