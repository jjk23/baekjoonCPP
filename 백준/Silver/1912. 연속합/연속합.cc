#include <iostream>
#include <algorithm>
#include<map>
#include<stdlib.h>
#include<string>
#include<cmath>
using namespace std;
int dp[1000001] = { 0, };
int num[1000000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);   
    int n,max;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    dp[0] = num[0];
    max = dp[0];
    for (int i = 1; i < n; i++)
    {
        if (dp[i - 1]+num[i] < num[i])
        {
            dp[i] = num[i];
        }
        else
        {
            dp[i] = dp[i - 1] + num[i];
        }
        if (dp[i] > max)
        {
            max = dp[i];
        }
    }
    cout << max;
}