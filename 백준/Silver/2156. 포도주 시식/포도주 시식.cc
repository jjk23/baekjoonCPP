#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int dp[10001];
int arr[10001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(max(dp[1] + arr[3], arr[2] + arr[3]),dp[2]);
    for (int i = 2; i < n - 1; i++)
    {
        dp[i + 2] = max(max(dp[i] + arr[i + 2], dp[i - 1] + arr[i + 1] + arr[i + 2]),dp[i+1]);
    }   
    cout << dp[n];
}