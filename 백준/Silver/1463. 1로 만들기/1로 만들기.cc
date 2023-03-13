#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
vector<int> dp(1000001, 0);
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int N;
    cin >> N;

    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;

    for (int i = 5; i <= N; i++) {
        if (i % 2 != 0 && i % 3 != 0)
            dp[i] = dp[i - 1] + 1;
        else if (i % 2 == 0 && i % 3 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);
        else if (i % 2 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
        else if (i % 3 == 0)
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    }
    cout << dp[N];
}